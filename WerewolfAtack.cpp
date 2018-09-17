//
// Created by Alex on 08.09.18.
//

#include "WerewolfAtack.h"
#include "WerewolfState.h"
#include "Vampire.h"
#include "Unit.h"
#include "Werewolf.h"
#include <typeinfo>

WerewolfAtack::WerewolfAtack() = default;

WerewolfAtack::~WerewolfAtack() = default;

void WerewolfAtack::bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
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

            victimAtack = new WerewolfAtack();
            victimState = new WerewolfState(tmpName, attackerState->getHitPointsLimit(), attackerState->getAtackPower());
        }
    }
}

void WerewolfAtack::thansformAndAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState)
{
    if ( attackerState->getForm() == HUMAN )
    {
        attackerState->setAtackPower(attackerState->getAtackPower() * 2);
        attackerState->setHitPoints(attackerState->getHitPoints() * 2);

        UnitAtack::atack(attackerAtack, attackerState, victimAtack, victimState);
    }
    else
    {
        attackerState->setAtackPower(attackerState->getAtackPower() / 2);
        attackerState->setHitPoints(attackerState->getHitPoints() / 2);

        UnitAtack::atack(attackerAtack, attackerState, victimAtack, victimState);
    }
}
