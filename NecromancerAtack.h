//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_NECROMANCERATACK_H
#define ARMY_2_NECROMANCERATACK_H

#include "SpellCasterAtack.h"

class NecromancerAtack : public SpellCasterAtack
{
public:
    NecromancerAtack();

    ~NecromancerAtack() override;

    void atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;

    void counterAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;

    void magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell) override;

    void heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell) override;
};


#endif //ARMY_2_NECROMANCERATACK_H
