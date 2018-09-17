// Created by Alex on 03.09.18.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include "UnitState.h"
#include "UnitAtack.h"
#include "DamageSpellBook.h"
#include "BookOfHealingSpell.h"

class Unit
{
protected:
    UnitState* state;
    UnitAtack* at;
public:
    Unit(const std::string &name, int hitPointsLimit, int atackPower);
    virtual ~Unit() = 0;

    virtual void makeDamage(Unit* unit);

    virtual void makeMagicDamage(Unit* unit, DamageSpellList spell);
    virtual void heal(Unit* unit, HealingSpellList spell);
    
    virtual void bite(Unit *unit);
    virtual void transformAndAtack(Unit *unit);

    virtual void show();
};

#endif //ARMY_UNIT_H

