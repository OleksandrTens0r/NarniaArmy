//
// Created by Alex on 09.09.18.
//

#include "SpellCasterState.h"

SpellCasterState::SpellCasterState(const std::string &name, int hitPointsLimit ,int atackPower, int manaLimit)
{
    this->manaLimit = manaLimit;
    this->manaReserve = manaLimit;
    this->setName(name);
    this->setHitPointsLimit(hitPointsLimit);
    this->setHitPoints(hitPointsLimit);
    this->setAtackPower(atackPower);
    this->setForm(HUMAN);
}

SpellCasterState::~SpellCasterState() = default;

void SpellCasterState::setManaLimit(int manaLimit)
{
    SpellCasterState::manaLimit = manaLimit;
}

void SpellCasterState::setManaReserve(int manaReserve)
{
    SpellCasterState::manaReserve = manaReserve;
}
