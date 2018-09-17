//
// Created by Alex on 03.09.18.
//

#ifndef ARMY_UNITATACK_H
#define ARMY_UNITATACK_H

#include "UnitState.h"
#include "IncorrectAction.h"
#include "DamageSpellBook.h"
#include "BookOfHealingSpell.h"

class UnitAtack
{
public:
    UnitAtack();
    virtual ~UnitAtack();
    
    virtual void bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState);
    virtual void thansformAndAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState);

    virtual void atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState);
    virtual void counterAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState);

    virtual void magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell);
    virtual void heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell);
};


#endif //ARMY_UNITATACK_H

