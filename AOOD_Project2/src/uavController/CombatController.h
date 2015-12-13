/*
 * CombatController.h
 *
 *  Created on: Dec 13, 2015
 *      Author: David
 */

#ifndef COMBATCONTROLLER_H_
#define COMBATCONTROLLER_H_


class CombatController
{
  public:

    virtual ~CombatController() {}

    virtual void fireMissile() = 0;
    virtual void fireGuns() = 0;
    virtual void dropBombs() = 0;
    virtual void lockOnTarget() = 0;
    virtual void breakEngage() = 0;
};

#endif /* COMBATCONTROLLER_H_ */
