//
// Created by Alex on 08.09.18.
//

#ifndef TET_ROGUEATACK_H
#define TET_ROGUEATACK_H

#include "UnitAtack.h"
#include "Unit.h"

class Rogue;

class RogueAtack : public UnitAtack
{
public:
    RogueAtack();

    ~RogueAtack() override;

    void atack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;
};


#endif //TET_ROGUEATACK_H
