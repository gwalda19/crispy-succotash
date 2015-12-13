//
//  Header.h
//  Group2_Final_Project2
//
//  Created by Anthony Miele on 12/6/15.
//  Copyright © 2015 Anthony Miele. All rights reserved.
//

#ifndef UAVFactory_h
#define UAVFactory_h

class SupplyController;
class ReconController;
class CombatController;
class automaticDutiesProvider;

class uavFactory
{
  public:

    virtual ~uavFactory() {}

    virtual SupplyController* getSupplyController() = 0;

    virtual ReconController* getReconController() = 0;

    virtual CombatController* getCombatController() = 0;

    virtual automaticDutiesProvider* getDutiesProvider() = 0;
};

#endif /* UAVFactory_h */
