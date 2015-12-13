//
//  ReconFactory.h
//  Group2_Final_Project2
//
//  Created by Anthony Miele on 12/6/15.
//  Copyright © 2015 Anthony Miele. All rights reserved.
//

#ifndef ReconFactory_h
#define ReconFactory_h

#include <stdio.h>
#include "UAVFactory.h"

class ReconFactory : public UAVFactory
{
public:
    
    //Inherited
    void flightControls();
    void createSensors();
    void updatePosition();
    void returnToBase();
    void toggleVisionCamera();
    
    //Local
    virtual void takePictures();
    virtual void transmitPicture();
    
private:
    
};
#endif /* ReconFactory_h */
