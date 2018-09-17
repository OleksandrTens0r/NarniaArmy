//
// Created by Alex on 08.09.18.
//

#include "WerewolfState.h"

WerewolfState::WerewolfState(const std::string &name, int hitPointsLimit, int atackPower)
{
    this->setName(name);
    this->setHitPointsLimit(hitPointsLimit);
    this->setHitPoints(hitPointsLimit);
    this->setAtackPower(atackPower);
    this->setForm(HUMAN);
}

WerewolfState::~WerewolfState()
{

}
