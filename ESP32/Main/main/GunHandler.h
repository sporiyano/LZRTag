/*
 * GunHandler.h
 *
 *  Created on: 18 Jan 2019
 *      Author: xasin
 */

#ifndef MAIN_GUNHANDLER_H_
#define MAIN_GUNHANDLER_H_

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver/gpio.h"

namespace Lasertag {

enum FIRE_STATE {
	WAIT_ON_VALID,
	POST_TRIGGER_DELAY,
	POST_TRIGGER_RELEASE,
	POST_SHOT_DELAY,
	POST_SALVE_DELAY,
	POST_SALVE_RELEASE
};

enum RELOAD_STATE {
	FULL,
	POST_SHOT_WAIT,
	POST_RELOAD_WAIT
};

class GunSpecs {
public:
	int  maxAmmo;

	int  postTriggerTicks;
	bool postTriggerRelease;

	int	 shotsPerSalve;

	int	 perShotDelay;
	int	 postSalveDelay;

	bool postSalveRelease;

	int	 postShotReloadBlock;
	int	 postReloadReloadBlock;
	int  perReloadRecharge;

	double perShotHeatup;
	double perTickCooldown;

	GunSpecs();
};

class GunHandler {
private:
	int currentAmmo;

	FIRE_STATE 		fireState;
	RELOAD_STATE	reloadState;

	TickType_t shotTick;
	int salveCounter;
	TickType_t lastShotTick;

	TickType_t reloadTick;

	float gunHeat;

	const gpio_num_t triggerPin;

	void handle_shot();

	void shot_tick();
	void reload_tick();
	void graphics_tick();

public:
	GunSpecs currentGun;

	GunHandler(gpio_num_t trgtPin);

	bool triggerPressed();

	TickType_t timeSinceLastShot();
	uint8_t getGunHeat();

	void tick();
};

} /* namespace Lasertag */

#endif /* MAIN_GUNHANDLER_H_ */
