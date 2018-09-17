//
// Created by Alex on 12.09.18.
//

#include "HealerAtack.h"

HealerAtack::HealerAtack() = default;

HealerAtack::~HealerAtack() = default;

void HealerAtack::magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell)
{
    if ( attackerState->ensureIsAlive() )
    {
        int tmpNeedMana = getBookDmSp()->getNeedMana(spell);

        if ( attackerState->getManaReserve() >= tmpNeedMana )
        {
            victimState->takeMagicDamage(getBookDmSp()->getDamage(spell) / 2);

            attackerState->takeMana(tmpNeedMana);
        }
    }
}


