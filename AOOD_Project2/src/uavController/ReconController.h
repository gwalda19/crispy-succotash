/*
 * ReconController.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef RECONCONTROLLER_H_
#define RECONCONTROLLER_H_


class ReconController
{
  public:

    virtual ~ReconController() {}

    virtual void takePicture() = 0;
    virtual void transmitPicture() = 0;
};

#endif /* RECONCONTROLLER_H_ */
