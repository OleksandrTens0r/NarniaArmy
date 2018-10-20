//
// Created by Alex on 12.09.18.
//

#include "Healer.h"

Healer::Healer(const std::string &name, int hitPointsLimit, int atackPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, manaLimit)
{
    delete at;

    at = new HealerAtack();
}

Healer::~Healer() = default;
