/*
 * uavUserOperator.cpp
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#include "uavUserOperator.h"
#include "uavFactory.h"
#include "SupplyController.h"
#include "ReconController.h"
#include "CombatController.h"
#include "MissionModes.h"
#include "uavLogger.h"

uavUserOperator::uavUserOperator( uavFactory* uav_factory )
{
  supply_controller = uav_factory->getSupplyController();
  recon_controller  = uav_factory->getReconController();
  combat_controller = uav_factory->getCombatController();
}

uavUserOperator::~uavUserOperator()
{

}

void uavUserOperator::update()
{
  //Update Position

  uavMissionModes::uavMissionTypesEnum mission = uavMissionModes::SUPPLY_MISSION;

  switch( mission )
  {
    case uavMissionModes::COMBAT_MISSION:
      uavLogger::getInstance()->log( "Do user combat functionality" );
      break;

    case uavMissionModes::RECON_MISSION:
      uavLogger::getInstance()->log( "Do user recon functionality" );
      break;

    case uavMissionModes::SUPPLY_MISSION:
      uavLogger::getInstance()->log( "Do user supply functionality" );
      break;

    default:
      uavLogger::getInstance()->log( "UAV is not on a mission" );
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
