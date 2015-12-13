/*
 * SupplyController.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef SUPPLYCONTROLLER_H_
#define SUPPLYCONTROLLER_H_


class SupplyController
{
  public:

    virtual ~SupplyController() {}

    virtual void dropSupply() = 0;
};

#endif /* SUPPLYCONTROLLER_H_ */
