/*
 * uavUserOperator.h
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#ifndef UAVUSEROPERATOR_H_
#define UAVUSEROPERATOR_H_

#include "userButtonActions.h"

class SupplyController;
class ReconController;
class CombatController;

class uavUserOperator : public userButtonActions
{
  public:

    uavUserOperator();

    virtual ~uavUserOperator();

    void initialize( SupplyController* supply_controller,
                     ReconController* recon_controller,
                     CombatController* combat_controller );

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
    ReconController* recon_controller;
    CombatController* combat_controller;
};

#endif /* UAVUSEROPERATOR_H_ */
