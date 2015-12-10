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

    SupplyController();
    ~SupplyController();

    void dropSupply();

    virtual void performMissionDuty( uavMissionModes::uavMissionTypesEnum mission_type );

private:

};

#endif /* SuppplyController_h */
