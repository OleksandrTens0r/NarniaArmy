//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_WARLOCK_H
#define ARMY_2_WARLOCK_H

#include "SpellCaster.h"
#include "WarlockAtack.h"

class Warlock : public SpellCaster
{
public:
    Warlock(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);

    ~Warlock() override;
};


#endif //ARMY_2_WARLOCK_H
