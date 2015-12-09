//
//  CombatFactory.h
//  Group2_Final_Project2
//
//  Created by Anthony Miele on 12/6/15.
//  Copyright © 2015 Anthony Miele. All rights reserved.
//

#ifndef CombatFactory_h
#define CombatFactory_h

#include <stdio.h>
#include "UAVFactory.h"

class CombatFactory : public UAVFactory
{
public:
    //Inherited
    void flightControls();
    void createSensors();
    void updatePosition();
    void returnToBase();
    void toggleVisionCamera();

    //Local
    virtual void acquireTargetLock();
    virtual void fireMissile();
    virtual void dropBomb();

private:

};

#endif /* CombatFactory_h */
