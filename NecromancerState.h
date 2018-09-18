//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_NECROMANCERSTATE_H
#define ARMY_2_NECROMANCERSTATE_H

#include "SpellCasterState.h"

class NecromancerState : public SpellCasterState
{
public:
    NecromancerState(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);

    ~NecromancerState() override;

    void takeHolyWaterDamage(int Hp) override;
};


#endif //ARMY_2_NECROMANCERSTATE_H
