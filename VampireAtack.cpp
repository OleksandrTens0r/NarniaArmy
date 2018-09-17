//
// Created by Alex on 04.09.18.
//

#include "VampireState.h"
#include "VampireAtack.h"
#include "Unit.h"
#include "Werewolf.h"
#include "Vampire.h"
#include <typeinfo>


VampireAtack::VampireAtack() = default;

VampireAtack::~VampireAtack() = default;

void VampireAtack::bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        if ( typeid(*victimAtack) == typeid(WerewolfAtack) || typeid(*victimAtack) == typeid(VampireAtack) )
        {
            UnitAtack::atack(attackerAtack, attackerState, victimAtack, victimState);
        }
        else if ( victimState->ensureIsAlive() )
        {
            std::string tmpName = victimState->getName();

            delete victimAtack;
            delete victimState;

            victimAtack = new VampireAtack();
            victimState = new VampireState(tmpName, attackerState->getHitPointsLimit(), attackerState->getAtackPower());
        }
    }
}


void VampireAtack::atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        int currentHp = victimState->getHitPoints();

        victimState->takeDamage(attackerState->getAtackPower());

        attackerState->addHp(currentHp - victimState->getHitPoints());

        victimAtack->counterAtack(victimAtack, victimState, attackerAtack, attackerState);
    }
}

void VampireAtack::counterAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->ensureIsAlive() )
    {
        int currentHp = victimState->getHitPoints();

        victimState->takeDamage(attackerState->getAtackPower() / 2);

        attackerState->addHp(currentHp - victimState->getHitPoints());
    }
}


