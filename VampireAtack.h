//
// Created by Alex on 04.09.18.
//

#ifndef ARMY_VAMPIREATACK_H
#define ARMY_VAMPIREATACK_H


#include "UnitAtack.h"

class Vampire;

class VampireAtack : public UnitAtack
{
public:
    VampireAtack();

    ~VampireAtack() override;

    void bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;

    void atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;

    void counterAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;
};


#endif //ARMY_VAMPIREATACK_H
