//
// Created by Alex on 13.09.18.
//

#ifndef TET_PRIESTMAGICARTACK_H
#define TET_PRIESTMAGICARTACK_H


#include "SpellCasterAtack.h"
class Priest;

class PriestArtack : public SpellCasterAtack
{
public:
    PriestArtack();
    ~PriestArtack() override;

    void magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell) override;
};


#endif //TET_PRIESTMAGICARTACK_H
