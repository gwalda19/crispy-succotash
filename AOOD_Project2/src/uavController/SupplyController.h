//
//  SupplyController.h
//  Group2_Final_Project2
//
//  Created by Group 2
//  09DEC15
//

#ifndef SupplyController_H
#define SupplyController_H

#include "automaticDutiesProvider.h"

class SupplyController : public automaticDutiesProvider
{
public:

    SupplyController( automaticDutiesProvider* next_duty_provider );
    ~SupplyController();

    void dropSupply();

    virtual void performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type );

private:

    automaticDutiesProvider* next_duty_provider;
};

#endif /* SuppplyController_h */
