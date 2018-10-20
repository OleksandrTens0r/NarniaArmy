//
// Created by Alex on 08.09.18.
//

#ifndef ARMY_WEREWOLF_H
#define ARMY_WEREWOLF_H

#include "Unit.h"
#include "WerewolfState.h"
#include "WerewolfAtack.h"

class Werewolf : public Unit
{
public:
    Werewolf(const std::string &name, int hitPointsLimit, int atackPower);

    ~Werewolf() override;

    void show() override;
};


#endif //ARMY_WEREWOLF_H
