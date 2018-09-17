//
// Created by Alex on 09.09.18.
//

#ifndef ARMY_2_BERSERKERSTATE_H
#define ARMY_2_BERSERKERSTATE_H

#include "UnitState.h"

class BerserkerState : public UnitState
{
public:
    BerserkerState(const std::string &name, int hitPointsLimit, int atackPower);
    ~BerserkerState() override;

    void takeMagicDamage(int Hp) override;
};


#endif //ARMY_2_BERSERKERSTATE_H
