//
// Created by Alex on 09.09.18.
//

#ifndef TET_SPELLCASTER_H
#define TET_SPELLCASTER_H


#include "Unit.h"
#include "SpellCasterState.h"
#include "SpellCasterAtack.h"

class SpellCaster : public Unit
{
public:
    SpellCaster(const std::string &name, int hitPointsLimit ,int atackPower, int magicPower, int manaLimit);
    virtual ~SpellCaster() = 0;
};


#endif //TET_SPELLCASTER_H
