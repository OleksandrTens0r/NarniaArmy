//
// Created by Alex on 09.09.18.
//

#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string &name, int hitPointsLimit ,int atackPower, int magicPower, int manaLimit)
    : Unit(name, hitPointsLimit, atackPower)
{
    delete at;
    delete state;

    at = new SpellCasterAtack();
    state = new SpellCasterState(name, hitPointsLimit, atackPower, magicPower, manaLimit);
}

SpellCaster::~SpellCaster() = default;
