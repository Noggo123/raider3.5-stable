#pragma once

#include <functional>

#include "Logic/Game.h"
#include "Logic/Spawners.h"
#include "Logic/Abilities.h"
#include "UE4.h"
#include "Logger.hpp"

std::vector<std::string> Consumables = {
    "Athena_Shields",
    "Athena_ShieldSmall",
    "Athena_PurpleStuff",
    "Athena_SuperMedkit",
    "Athena_Grenade",
    "Athena_KnockGrenade",
    "Athena_SmokeGrenade",
    "Athena_StickyGrenade",
    "Athena_Bush",
    "Athena_Medkit",
    "Athena_DanceGrenade",
    "Athena_SmokeGrenade"
};
std::vector<std::string> Weapons = {
    "WID_Assault_AutoHigh_Athena_SR_Ore_T03",
    "WID_Assault_AutoHigh_Athena_VR_Ore_T03",
    "WID_Assault_Auto_Athena_R_Ore_T03",
    "WID_Assault_Auto_Athena_UC_Ore_T03",
    "WID_Assault_Auto_Athena_C_Ore_T02",
    "WID_Shotgun_Standard_Athena_C_Ore_T03",
    "WID_Shotgun_Standard_Athena_C_Ore_T03",
    "WID_Shotgun_Standard_Athena_UC_Ore_T03",
    "WID_Shotgun_SemiAuto_Athena_UC_Ore_T03",
    "WID_Shotgun_SemiAuto_Athena_R_Ore_T03",
    "WID_Shotgun_SemiAuto_Athena_VR_Ore_T03",
    "WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03",
    "WID_Sniper_BoltAction_Scope_Athena_VR_Ore_T03",
    "WID_Sniper_BoltAction_Scope_Athena_SR_Ore_T03",
    "WID_Sniper_Standard_Scope_Athena_VR_Ore_T03",
    "WID_Sniper_Standard_Scope_Athena_SR_Ore_T03",
    "WID_Pistol_AutoHeavyPDW_Athena_UC_Ore_T03",
    "WID_Pistol_AutoHeavyPDW_Athena_R_Ore_T03",
    "WID_Pistol_Scavenger_Athena_UC_Ore_T03",
    "WID_Pistol_Scavenger_Athena_R_Ore_T03",
    "WID_Pistol_Scavenger_Athena_VR_Ore_T03",
    //"WID_Assault_LMG_Athena_VR_Ore_T03",
    //"WID_Assault_LMG_Athena_SR_Ore_T03",
    "WID_Pistol_SemiAuto_Athena_C_Ore_T02",
    "WID_Pistol_SemiAuto_Athena_UC_Ore_T03",
    "WID_Pistol_SemiAuto_Athena_R_Ore_T03",
    "WID_Pistol_SemiAuto_Athena_VR_Ore_T03",
    "WID_Pistol_SemiAuto_Athena_SR_Ore_T03",
    "WID_Pistol_SixShooter_Athena_C_Ore_T02",
    "WID_Pistol_SixShooter_Athena_UC_Ore_T03",
    "WID_Pistol_SixShooter_Athena_R_Ore_T03",
    "WID_Pistol_HandCannon_Athena_VR_Ore_T03",
    "WID_Pistol_HandCannon_Athena_SR_Ore_T03",
    "WID_Shotgun_SlugFire_Athena_VR",
    "WID_Shotgun_SlugFire_Athena_SR",
    // "WID_Launcher_Rocket_Athena_R_Ore_T03",
    // "WID_Launcher_Rocket_Athena_VR_Ore_T03",
    // "WID_Launcher_Rocket_Athena_SR_Ore_T03",
};  



static void DropRandomConsumable(auto location)
{
    using namespace Spawners;
    srand((unsigned int)time(NULL));
    auto def = Consumables[rand() % Consumables.size()];
    SummonPickupFromChest(FindWID(def), 1, location);
}
static void DropRandomWeapon(auto location) {
    using namespace Spawners;
    srand((unsigned int)time(NULL));
    auto def = Weapons[rand() % Weapons.size()];
    SummonPickupFromChest(FindWID(def), 1, location);
}