
module Lasertag
class Client
	def self.mqtt
		@mqtt
	end
	def self.game
		@game
	end

	attr_reader :name

	attr_reader :status

	attr_reader :team
	attr_reader :brightness

	attr_reader :id

	attr_reader :ammo

	attr_reader :deadSince

	attr_reader :battery
	attr_reader :ping
	attr_reader :heap

	attr_reader :hitpoints
	attr_accessor :data

	attr_accessor :hitIDTimetable

	def initialize(name)
		@name = name;

		@mqttTopic = "Lasertag/Players/#{@name}"

		@status = nil;

		@team = 0;
		@brightness = 0;

		@ammo = 0;

		@dead = false;

		@battery = 3.3;
		@ping = 10000;
		@heap = 40000;

		@hitpoints = 0;
		self.regenerate(100);
		@data = Hash.new();

		@hitIDTimetable = Hash.new(Time.new(0));
	end

	def mqtt
		self.class.mqtt
	end
	def game
		self.class.game
	end

	def connected?()
		return @status == "OK"
	end

	def safemode?()
		return @status == "SAFEMODE"
	end
	def clear_safemode()
		console('file.remove("BOOT_SAFECHECK")') if safemode?
	end

	def send_message(topic, data, retain: nil)
		mqtt().publish_to topic, data, retain: retain;
	end

	def team=(n)
		n = n.to_i;
		raise ArgumentError, "Team out of range (must be between 0 and 255)" unless n != nil and n <= 255 and n >= 0;

		return if @team == n;
		@team = n;
		send_message "#{@mqttTopic}/Team", @team, retain: true;
		return true;
	end
	def team_color()
		colors = {
			0 => "#050505",
			1 => "#aa0505",
			2 => "#05aa05",
			3 => "#aaaa05",
			4 => "#0505aa",
			5 => "#aa05aa",
			6 => "#05aaaa",
			7 => "#aaaaaa"
		}

		return colors[@team];
	end
	def brightness=(n)
		n = n.to_i;
		raise ArgumentError, "Brightness out of range (must be between 0 and 7 or nil)" unless n != nil and n <= 7 and n >= 0;
		return if @brightness == n;

		@brightness = n;
		send_message "#{@mqttTopic}/Brightness", @brightness, retain: true;
		return true;
	end
	def id=(n)
		if(n != nil) then
			raise ArgumentError, "ID must be integer or nil!" unless n.is_a? Integer;
			raise ArgumentError, "ID out of range (0<ID<256)" unless n < 256 and n > 0;

			@id = n;
		else
			@id = nil;
		end

		send_message "#{@mqttTopic}/ID", @id, retain: true;
	end
	def dead?
		return @dead;
	end
	def dead=(d)
		dead = (d ? true : false);
		return if @dead == dead;
		@dead = dead;

		@deadSince = @dead ? Time.now() : nil;

		send_message "#{@mqttTopic}/Dead", (@dead ? "true" : ""), retain: true;
	end
	def kill_by(sourcePlayer)
		return if @dead;
		self.dead= true;

		send_message "Lasertag/Game/Events", {source: sourcePlayer.name, target: @name, type: "kill"}.to_json
		game()._handle_player_kill(self, sourcePlayer);
	end
	def regenerate(amount)
		return if @hitpoints >= 100;
		@hitpoints = [@hitpoints + amount, 100].min;

		send_message "#{@mqttTopic}/HP", @hitpoints.to_s, retain: true
	end
	def damage_by(amount, sourcePlayer)
		if (@hitpoints -= amount) <= 0
			@hitpoints = 0;

			kill_by(sourcePlayer) if sourcePlayer;
			send_message "#{@mqttTopic}/HP", @hitpoints.to_s, retain: true
			return true;
		else
			send_message "#{@mqttTopic}/HP", @hitpoints.to_s, retain: true
			return false;
		end
	end

	def ammo=(a)
		unless (a.is_a?(Integer) and (a >= 0)) then
			raise ArgumentError, "Ammo amount needs to be a positive number!"
		end

		@ammo = a;

		send_message "#{@mqttTopic}/AmmoSet", a
	end
	def ammo_percentage()
		return @ammo / (@fireConfig[:ammoCap] or 5).to_f;
	end

	def hitConfig
		return Hash.new unless @hitConfig;
		return @hitConfig;
	end
	def hitConfig=(h)
		if(h == nil) then
			mqtt.publish_to "#{@mqttTopic}/HitConf", "", retain: true;
			@hitConfig = nil;
			return;
		end

		raise ArgumentError, "Hit Config needs to be a hash or nil!" unless h.is_a? Hash
		@hitConfig = h;

		send_message "#{@mqttTopic}/HitConf", @hitConfig.to_json, retain: true;
	end

	def fireConfig
		return Hash.new unless @fireConfig;
		return @fireConfig
	end
	def fireConfig=(h)
		if(h == nil) then
			mqtt.publish_to "#{@mqttTopic}/FireConf", "", retain: true;
			@fireConfig = nil;
			return;
		end

		raise ArgumentError, "Fire Config needs to be a hash or nil!" unless h.is_a? Hash
		@fireConfig = h;

		send_message "#{@mqttTopic}/FireConf", @fireConfig.to_json, retain: true;
	end

	def clean_all_topics()
		mqtt.publish_to "#{@mqttTopic}/Team", "", retain: true;
		mqtt.publish_to "#{@mqttTopic}/Brightness", "", retain: true;
		mqtt.publish_to "#{@mqttTopic}/ID", "", retain: true;
		mqtt.publish_to "#{@mqttTopic}/Dead", "", retain: true;
		mqtt.publish_to "#{@mqttTopic}/Heartbeat", "", retain: true;
		mqtt.publish_to "#{@mqttTopic}/HP", "", retain: true;

		self.hitConfig = nil;
		self.fireConfig = nil;
	end

	def console(str)
		send_message "#{@mqttTopic}/Console/In", str;
	end
	private :console

	def override_brightness(level, duration)
		raise ArgumentError unless level.is_a? Integer and duration.is_a? Numeric
		console("overrideVest(#{(duration*1000).to_i},#{level});");
	end
	def stop_brightness_override()
		console("overrideVest(0, 0);");
	end

	def vibrate(duration)
		raise ArgumentError, "Vibration-duration out of range (between 0 and 65.536)" unless duration.is_a? Numeric and duration <= 65.536 and duration >= 0
		console("vibrate(#{(duration*1000).to_i});");
	end

	def vibrate_pattern(pattern)
		valid_patterns = {
			off: "0",
			heartbeat: "1",
		};
		raise ArgumentError, "No valid pattern selected!" unless valid_patterns.has_key? pattern;
		return if pattern == @currentVibratePattern;

		@currentVibratePattern = pattern;
		send_message("#{@mqttTopic}/Heartbeat", valid_patterns[pattern], retain: true);
	end
	def heartbeat=(data)
		if(data) then
			vibrate_pattern(:heartbeat);
		else
			vibrate_pattern(:off);
		end
	end
	def heartbeat
		return @currentVibratePattern == :heartbeat;
	end

	def fire
		console("fireWeapon();")
	end

	def noise(duration: 0.5, startF: 440, endF: startF)
		return false unless duration.is_a? Numeric and startF.is_a? Integer and endF.is_a? Integer
		console("ping(#{startF},#{endF},#{(duration*1000).to_i});");
	end

	def hit()
		console("displayHit();");
	end


	def inspect()
		iString = "<Player:#{@name}##{@id ? @id : "OFFLINE"}, Team=#{@team}";
		iString += ", DEAD" if dead?
		iString += ", Battery=#{@battery.round(2)}"
		iString += ", Heap=#{@heap}" if @heap < 10000;
		iString +=  ", Ping=#{@ping.ceil}ms>";
	end
	alias to_s inspect

	def to_hash()
		return {
			data: @data,

			id: @id,

			team: @team,
			brightness: @brightness,
			ammo: ammo_percentage(),

			hp:   @hitpoints,

			dead: dead?,

			battery: @battery,
			ping: @ping,
			heap: @heap
		}
	end
	alias to_h to_hash

	def to_json()
		return self.to_hash.to_json
	end
end
end
