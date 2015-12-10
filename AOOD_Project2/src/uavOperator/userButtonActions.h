/*
 * userButtonActions.h
 *
 *  Created on: Dec 10, 2015
 *      Author: dgwalthney
 */

#ifndef USERBUTTONACTIONS_H_
#define USERBUTTONACTIONS_H_


class userButtonActions
{
public:

  virtual ~userButtonActions() {}

  virtual void fireMissile() = 0;
  virtual void fireGun() = 0;
  virtual void dropBomb() = 0;
  virtual void lockTarget() = 0;
  virtual void breakEngage() = 0;

  virtual void takePicture() = 0;
  virtual void transmitPictures() = 0;

  virtual void dropSupplies() = 0;
};


#endif /* USERBUTTONACTIONS_H_ */
