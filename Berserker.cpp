//
// Created by Alex on 09.09.18.
//

#include "Berserker.h"

Berserker::Berserker(const std::string &name, int hitPointsLimit, int atackPower) : Unit(name, hitPointsLimit, atackPower)
{
    delete state;

    state = new BerserkerState(name, hitPointsLimit, atackPower);
}

Berserker::~Berserker() = default;
