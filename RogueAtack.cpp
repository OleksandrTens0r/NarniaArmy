//
// Created by Alex on 08.09.18.
//

#include "RogueAtack.h"

RogueAtack::RogueAtack() = default;

RogueAtack::~RogueAtack() = default;

void RogueAtack::atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        victimState->takeDamage(attackerState->getAtackPower());
    }
}
