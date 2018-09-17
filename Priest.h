//
// Created by Alex on 13.09.18.
//

#ifndef TET_PRIEST_H
#define TET_PRIEST_H


#include "SpellCaster.h"
#include "PriestArtack.h"

class Priest : public SpellCaster
{
public:
    Priest(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);

    ~Priest() override;
};


#endif //TET_PRIEST_H
