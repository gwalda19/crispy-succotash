/*
 * uavUserOperator.h
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#ifndef UAVUSEROPERATOR_H_
#define UAVUSEROPERATOR_H_

#include "userButtonActions.h"

class uavFactory;
class SupplyController;
class ReconController;
class CombatController;

///-----------------------------------------
///  This class handles the user operations
///  of the UAV. It implements the userButtonActions
///  interface so that the GUI knows what buttons
///  actions can be done.
///-----------------------------------------
class uavUserOperator : public userButtonActions
{
  public:

    uavUserOperator( uavFactory* uav_factory );
    virtual ~uavUserOperator();

    void update();

    virtual void fireMissile();
    virtual void fireGun();
    virtual void dropBomb();
    virtual void lockTarget();
    virtual void breakEngage();

    virtual void takePicture();
    virtual void transmitPictures();

    virtual void dropSupplies();

  private:

    SupplyController* supply_controller;
    ReconController*  recon_controller;
    CombatController* combat_controller;
};

#endif /* UAVUSEROPERATOR_H_ */
