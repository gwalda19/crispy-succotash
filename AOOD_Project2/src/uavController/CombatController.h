//
//  CombatController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#ifndef CombatController_h
#define CombatController_h

#include "automaticDutiesProvider.h"

class CombatController : public automaticDutiesProvider
{
  public:

    CombatController( automaticDutiesProvider* next_duty_provider );

    virtual ~CombatController();

    void fireMissile();
    void fireGuns();
    void dropBombs();
    void lockOnTarget();
    void breakEngage();

    virtual void performMissionDuty(
                   uavMissionModes::uavMissionTypesEnum mission_type );

  private:

    automaticDutiesProvider* next_duty_provider;
};

#endif /* CombatController_h */
