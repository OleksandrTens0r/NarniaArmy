//
// Created by Alex on 04.09.18.
//

#ifndef ARMY_VAMPIRESTATE_H
#define ARMY_VAMPIRESTATE_H


#include "UnitState.h"

class VampireState : public UnitState
{
public:
    VampireState(const std::string &name, int hitPointsLimit, int atackPower);
    ~VampireState() override;

    void takeHolyWaterDamage(int Hp) override;
};


#endif //ARMY_VAMPIRESTATE_H
