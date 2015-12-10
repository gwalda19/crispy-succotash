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
    ~CombatController();

    void fireMissile();
    void fireGuns();

    virtual void performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type );

private:

    automaticDutiesProvider* next_duty_provider;
};

#endif /* CombatController_h */
