//
// Created by Alex on 11.09.18.
//

#include "WizardAtack.h"

WizardAtack::WizardAtack() = default;

WizardAtack::~WizardAtack() = default;

void WizardAtack::heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell)
{
    if ( attackerState->ensureIsAlive() )
    {
        int tmpNeedMana = getBookHlSp()->getNeedMana(spell);

        if ( attackerState->getManaReserve() >= tmpNeedMana )
        {
            victimState->addHp( getBookHlSp()->getAmountRestoreHp(spell) / 2);

            attackerState->takeMana(tmpNeedMana);
        }
    }
}
