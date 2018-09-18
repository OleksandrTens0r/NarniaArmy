//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_NECROMANCER_H
#define ARMY_2_NECROMANCER_H

#include "SpellCaster.h"
#include "NecromancerState.h"
#include "NecromancerAtack.h"

class Necromancer : public SpellCaster
{
public:
    Necromancer(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);

    ~Necromancer() override;
};


#endif //ARMY_2_NECROMANCER_H
