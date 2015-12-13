/*
 * uavFactoryImpl.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef UAVFACTORYIMPL_H_
#define UAVFACTORYIMPL_H_

#include "uavFactory.h"
#include "SupplyControllerImpl.h"
#include "ReconControllerImpl.h"
#include "CombatControllerImpl.h"

class automaticDutiesProvider;

class uavFactoryImpl : public uavFactory
{
  public:

    uavFactoryImpl();
    virtual ~uavFactoryImpl();

    virtual SupplyController* getSupplyController();
    virtual ReconController* getReconController();
    virtual CombatController* getCombatController();

    virtual automaticDutiesProvider* getDutiesProvider();

  private:

    SupplyControllerImpl* supply_controller;
    ReconControllerImpl*  recon_controller;
    CombatControllerImpl* combat_controller;

    automaticDutiesProvider* duties_provider;
};

#endif /* UAVFACTORYIMPL_H_ */
