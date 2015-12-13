//
//  CombatController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#ifndef CombatController_h
#define CombatController_h

#include "CombatController.h"
#include "automaticDutiesProvider.h"

class CombatControllerImpl : public CombatController,
                             public automaticDutiesProvider
{
  public:

    CombatControllerImpl( automaticDutiesProvider* next_duty_provider );

    virtual ~CombatControllerImpl();

    virtual void fireMissile();
    virtual void fireGuns();
    virtual void dropBombs();
    virtual void lockOnTarget();
    virtual void breakEngage();

    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};

#endif /* CombatController_h */
