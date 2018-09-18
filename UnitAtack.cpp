//
// Created by Alex on 03.09.18.
//

#include "UnitAtack.h"

UnitAtack::UnitAtack() = default;

UnitAtack::~UnitAtack() = default;

void UnitAtack::bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    throw IncorrectAction("This Unit can not bite!");
}

void UnitAtack::thansformAndAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    throw IncorrectAction("This Unit can not transform!");
}

void UnitAtack::atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        victimState->takeDamage(attackerState->getAtackPower());
        
        victimAtack->counterAtack(victimAtack, victimState, attackerAtack, attackerState);
    }
}

void UnitAtack::counterAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        victimState->takeDamage(attackerState->getAtackPower() / 2);
    }
}

void UnitAtack::magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell)
{
    throw IncorrectAction("This unit can not cast!");
}

void UnitAtack::heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell)
{
    throw IncorrectAction("This unit can not cast!");
}

Unit *UnitAtack::createDemon(UnitState *unitState)
{
    //throw IncorrectAction("This unit can not cast!");
    return nullptr;
}

