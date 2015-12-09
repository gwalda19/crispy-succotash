//
//  CombatController.cpp
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#include "CombatController.h"
#include "uavLogger.h"

CombatController::CombatController()
{
}

CombatController::~CombatController()
{
}

void CombatController::fireMissile()
{
  uavLogger::getInstance()->log("Missile is being fired");
}

void CombatController::fireGuns()
{
  uavLogger::getInstance()->log("Guns activated at given target");
}
