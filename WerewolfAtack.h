//
// Created by Alex on 08.09.18.
//

#ifndef  ARMY_WEREWOLFATACK_H
#define  ARMY_WEREWOLFATACK_H

#include "UnitAtack.h"

class Werewolf;

class WerewolfAtack : public UnitAtack
{
public:
    WerewolfAtack();

    ~WerewolfAtack() override;

    void bite(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;

    void thansformAndAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState) override;
};


#endif // ARMY_WEREWOLFATACK_H
