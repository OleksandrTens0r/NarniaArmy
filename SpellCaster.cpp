//
// Created by Alex on 09.09.18.
//

#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string &name, int hitPointsLimit ,int atackPower, int manaLimit)
    : Unit(name, hitPointsLimit, atackPower)
{
    delete at;
    delete state;

    at = new SpellCasterAtack();
    state = new SpellCasterState(name, hitPointsLimit, atackPower, manaLimit);
}

void SpellCaster::show()
{
    Unit::show();
    std::cout << "Mana limit: " << this->state->getManaLimit() << std::endl;
    std::cout << "Mana reserve: " << this->state->getManaReserve() << std::endl;
}

SpellCaster::~SpellCaster() = default;
