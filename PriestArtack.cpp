//
// Created by Alex on 13.09.18.
//

#include "PriestArtack.h"

PriestArtack::PriestArtack() = default;

PriestArtack::~PriestArtack() = default;

void PriestArtack::magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell)
{
    if ( attackerState->ensureIsAlive() )
    {
        int tmpNeedMana = getBookDmSp()->getNeedMana(spell);

        if ( attackerState->getManaReserve() >= tmpNeedMana )
        {
            victimState->takeHolyWaterDamage(getBookDmSp()->getDamage(spell) / 2);

            attackerState->takeMana(tmpNeedMana);
        }
    }
}
