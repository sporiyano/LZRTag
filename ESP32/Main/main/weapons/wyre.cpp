/*
 * wyre.cpp
 *
 *  Created on: 25 Jan 2019
 *      Author: xasin
 */


#include "wyre.h"

namespace LZR {
namespace Weapons {

#include "wyre_charge.h"

#include "wyre_cooldown.h"

#include "wyre_fire_1.h"
#include "wyre_fire_2.h"
#include "wyre_fire_3.h"
#include "wyre_fire_4.h"
#include "wyre_fire_5.h"

#define AC(name) AudioCassette(name, sizeof(name))

const Lasertag::GunSpecs wyre {
	.maxAmmo = 8,
	.postTriggerTicks = 0,
	.postTriggerRelease = false,

	.shotsPerSalve = 3,

	.perShotDelay = 40,

	.postShotCooldownTicks = 200,
	.postShotVibrationTicks = 50,

	.postSalveDelay = 300,
	.postSalveRelease = true,

	.postShotReloadBlock = 3*600,
	.postReloadReloadBlock = 600,
	.perReloadRecharge = 2,

	.perShotHeatup = 0.1,
	.perTickCooldown = 0.99,

	.chargeSounds = {
			AC(wyre_charge)
	},
	.shotSounds = {
			AC(wyre_fire_1),
			AC(wyre_fire_2),
			AC(wyre_fire_3),
			AC(wyre_fire_4),
			AC(wyre_fire_5),
	},
	.cooldownSounds = {
			AudioCassette(wyre_cooldown, sizeof(wyre_cooldown))
	}
};
}
}
