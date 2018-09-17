//
// Created by Alex on 08.09.18.
//

#include "Rogue.h"
#include "RogueAtack.h"

Rogue::Rogue(const std::string &name, int hitPointsLimit, int atackPower) : Unit(name, hitPointsLimit, atackPower)
{
    delete at;

    at = new RogueAtack();
}

Rogue::~Rogue() = default;
