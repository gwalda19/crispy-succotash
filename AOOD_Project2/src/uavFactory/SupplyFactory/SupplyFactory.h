//
//  SupplyFactory.h
//  Group2_Final_Project2
//
//  Created by Anthony Miele on 12/6/15.
//  Copyright © 2015 Anthony Miele. All rights reserved.
//

#ifndef SupplyFactory_h
#define SupplyFactory_h

#include <stdio.h>
#include "UAVFactory.h"

class SupplyFactory : public UAVFactory
{
public:
    
    //Inherited
    void flightControls();
    void createSensors();
    void updatePosition();
    void returnToBase();
    void toggleVisionCamera();
    
    //Local
    virtual void toggleBayDoors();
    virtual void releasePackage();
    
private:
    
};

#endif /* SupplyFactory_h */
