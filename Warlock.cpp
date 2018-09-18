//
// Created by Alex on 18.09.18.
//

#include "Warlock.h"

Warlock::Warlock(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, magicPower, manaLimit)
{
    delete at;

    at = new WarlockAtack();
}

Warlock::~Warlock() = default;
