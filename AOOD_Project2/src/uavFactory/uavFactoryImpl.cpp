/*
 * uavFactoryImpl.cpp
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#include "uavFactoryImpl.h"
#include "../uavController/automaticDutiesProvider.h"

uavFactoryImpl::uavFactoryImpl()
{
  //Building of the Mission Controllers..
  supply_controller = new SupplyControllerImpl();
  duties_provider = supply_controller;

  recon_controller  = new ReconControllerImpl( duties_provider );
  duties_provider = recon_controller;

  combat_controller = new CombatControllerImpl( duties_provider );
  duties_provider = combat_controller;
}

uavFactoryImpl::~uavFactoryImpl()
{

}

SupplyController* uavFactoryImpl::getSupplyController()
{
  return supply_controller;
}

ReconController* uavFactoryImpl::getReconController()
{
  return recon_controller;
}

CombatController* uavFactoryImpl::getCombatController()
{
  return combat_controller;
}

automaticDutiesProvider* uavFactoryImpl::getDutiesProvider()
{
  return duties_provider;
}

