//
// Created by Alex on 13.09.18.
//

#include "Priest.h"

Priest::Priest(const std::string &name, int hitPointsLimit, int atackPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, manaLimit)
{
    delete at;

    at = new PriestArtack();
}

Priest::~Priest() = default;
