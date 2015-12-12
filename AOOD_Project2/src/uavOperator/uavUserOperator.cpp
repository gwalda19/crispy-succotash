/*
 * uavUserOperator.cpp
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#include "uavUserOperator.h"
#include "SupplyController.h"
#include "ReconController.h"
#include "CombatController.h"
#include "uavLogger.h"


uavUserOperator::uavUserOperator()
{

}

uavUserOperator::~uavUserOperator()
{

}

void uavUserOperator::initialize(
                   SupplyController* supply_controller,
                   ReconController*  recon_controller,
                   CombatController* combat_controller )
{
  this->supply_controller = supply_controller;
  this->recon_controller  = recon_controller;
  this->combat_controller = combat_controller;
}

void uavUserOperator::update()
{
  //Update Position

  uavMissionModes::uavMissionTypesEnum mission = uavMissionModes::SUPPLY_MISSION;

  switch( mission )
  {
    case uavMissionModes::COMBAT_MISSION:
      uavLogger::getInstance()->log( "Do user combat functionality");
      break;

    case uavMissionModes::RECON_MISSION:
      uavLogger::getInstance()->log( "Do user recon functionality");
      break;

    case uavMissionModes::SUPPLY_MISSION:
      uavLogger::getInstance()->log( "Do user supply functionality");
      break;

    default:
      uavLogger::getInstance()->log( "UAV is not on a mission");
      break;
  }
}

void uavUserOperator::fireMissile()
{
  combat_controller->fireMissile();
}

void uavUserOperator::fireGun()
{
  combat_controller->fireGuns();
}

void uavUserOperator::dropBomb()
{
  combat_controller->dropBombs();
}

void uavUserOperator::lockTarget()
{
  combat_controller->lockOnTarget();
}

void uavUserOperator::breakEngage()
{
  combat_controller->breakEngage();
}

void uavUserOperator::takePicture()
{
  recon_controller->takePicture();
}

void uavUserOperator::transmitPictures()
{
  recon_controller->transmitPicture();
}

void uavUserOperator::dropSupplies()
{
  supply_controller->dropSupply();
}
