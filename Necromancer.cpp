//
// Created by Alex on 18.09.18.
//

#include "Necromancer.h"

Necromancer::Necromancer(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, magicPower, manaLimit)
{
    delete at;
    delete state;

    at = new NecromancerAtack();
    state = new NecromancerState(name, hitPointsLimit, atackPower, magicPower, manaLimit);
}

Necromancer::~Necromancer() = default;
