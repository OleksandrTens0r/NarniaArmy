//
// Created by Alex on 18.09.18.
//

#include "WarlockAtack.h"

WarlockAtack::WarlockAtack()
{
    demonCount = -1;
}

WarlockAtack::~WarlockAtack()
{
    for ( auto x : demons )
    {
        delete x;
    }

    demons.clear();
}


Unit *WarlockAtack::createDemon(UnitState *unitState)
{
    if ( unitState->ensureIsAlive() )
    {
        Demon* demon = new Demon("Demon", unitState->getHitPointsLimit() / 2, unitState->getAtackPower() / 2);

        demons.push_back(demon);

        demonCount++;

        return demons[demonCount];
    }
}
