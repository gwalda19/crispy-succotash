//
//  Header.h
//  Group2_Final_Project2
//
//  Created by Anthony Miele on 12/6/15.
//  Copyright © 2015 Anthony Miele. All rights reserved.
//

#ifndef UAVFactory_h
#define UAVFactory_h

class UAVFactory
{
public:
    virtual ~UAVFactory() {}
    virtual void flightControls()     = 0;
    virtual void createSensors()      = 0;
    virtual void updatePosition()     = 0;
    virtual void returnToBase()       = 0;
    virtual void toggleVisionCamera() = 0;
};

#endif /* UAVFactory_h */
