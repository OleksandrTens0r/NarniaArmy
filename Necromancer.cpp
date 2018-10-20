//
// Created by Alex on 18.09.18.
//

#include "Necromancer.h"

Necromancer::Necromancer(const std::string &name, int hitPointsLimit, int atackPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, manaLimit)
{
    delete at;
    delete state;

    at = new NecromancerAtack();
    state = new NecromancerState(name, hitPointsLimit, atackPower, manaLimit);
}

Necromancer::~Necromancer() = default;
