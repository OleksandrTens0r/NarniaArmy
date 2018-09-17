//
// Created by Alex on 08.09.18.
//

#include "Werewolf.h"

Werewolf::Werewolf(const std::string &name, int hitPointsLimit, int atackPower) : Unit(name, hitPointsLimit, atackPower)
{
    delete state;
    delete at;

    state = new WerewolfState(name, hitPointsLimit, atackPower);
    at = new WerewolfAtack();
}

Werewolf::~Werewolf() = default;
