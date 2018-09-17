//
// Created by Alex on 04.09.18.
//

#include "VampireState.h"

VampireState::VampireState(const std::string &name, int hitPointsLimit, int atackPower)
{
    this->setName(name);
    this->setHitPointsLimit(hitPointsLimit);
    this->setHitPoints(hitPointsLimit);
    this->setAtackPower(atackPower);
    this->setForm(HUMAN);
}

VampireState::~VampireState() = default;

void VampireState::takeHolyWaterDamage(int Hp)
{
    takeDamage(Hp * 2);
}



