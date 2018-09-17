//
// Created by Alex on 12.09.18.
//

#ifndef TET_HEALER_H
#define TET_HEALER_H

#include "SpellCaster.h"
#include "HealerAtack.h"

class Healer : public SpellCaster
{
public:
    Healer(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);
    ~Healer() override;
};


#endif //TET_HEALER_H
