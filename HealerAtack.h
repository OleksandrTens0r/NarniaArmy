//
// Created by Alex on 12.09.18.
//

#ifndef TET_HEALERMAGICATACK_H
#define TET_HEALERMAGICATACK_H

#include "SpellCasterAtack.h"

class Healer;

class HealerAtack : public SpellCasterAtack
{
public:
    HealerAtack();
    ~HealerAtack() override;

    void magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell) override;
};


#endif //TET_HEALERMAGICATACK_H
