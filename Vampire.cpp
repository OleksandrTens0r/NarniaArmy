//
// Created by Alex on 04.09.18.
//

#include "Vampire.h"

Vampire::Vampire(const std::string &name, int hitPointsLimit, int atackPower) : Unit(name, hitPointsLimit, atackPower)
{
    delete state;
    delete at;

    state = new VampireState(name, hitPointsLimit, atackPower);
    at = new VampireAtack();
}

Vampire::~Vampire() = default;
