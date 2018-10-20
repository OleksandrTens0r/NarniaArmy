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
    SpellCaster(const std::string &name, int hitPointsLimit ,int atackPower, int manaLimit);

    ~SpellCaster() override = 0;

    void show() override;
};


#endif //TET_SPELLCASTER_H
