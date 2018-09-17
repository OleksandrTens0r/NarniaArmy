//
// Created by Alex on 09.09.18.
//

#include "BerserkerState.h"

BerserkerState::BerserkerState(const std::string &name, int hitPointsLimit, int atackPower)
{
    this->setName(name);
    this->setHitPointsLimit(hitPointsLimit);
    this->setHitPoints(hitPointsLimit);
    this->setAtackPower(atackPower);
    this->setForm(HUMAN);
}

BerserkerState::~BerserkerState() = default;

void BerserkerState::takeMagicDamage(int Hp)
{

}
