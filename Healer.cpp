//
// Created by Alex on 12.09.18.
//

#include "Healer.h"

Healer::Healer(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, magicPower, manaLimit)
{
    delete at;

    at = new HealerAtack();
}

Healer::~Healer() = default;
