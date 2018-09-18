//
// Created by Alex on 18.09.18.
//

#include "NecromancerAtack.h"

NecromancerAtack::NecromancerAtack() = default;

NecromancerAtack::~NecromancerAtack() = default;

void NecromancerAtack::magicAtack(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState, DamageSpellList spell)
{
    SpellCasterAtack::magicAtack(attackerAtack, attackerState, victimAtack, victimState, spell);

    victimState->addObserver(attackerState);
}

void NecromancerAtack::heal(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState, HealingSpellList spell)
{
    throw IncorrectAction("This Unit can not heal!");
}

void NecromancerAtack::atack(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState)
{
    UnitAtack::atack(attackerAtack, attackerState, victimAtack, victimState);

    victimState->addObserver(attackerState);
}

void NecromancerAtack::counterAtack(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState)
{
    UnitAtack::counterAtack(attackerAtack, attackerState, victimAtack, victimState);

    victimState->addObserver(attackerState);
}
