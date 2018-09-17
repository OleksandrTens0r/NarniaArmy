//
// Created by Alex on 09.09.18.
//

#ifndef TET_SPELLCASTERSTATE_H
#define TET_SPELLCASTERSTATE_H


#include "UnitState.h"

class SpellCasterState : public UnitState
{
public:
    SpellCasterState(const std::string &name, int hitPointsLimit ,int atackPower, int magicPower, int manaLimit);

    ~SpellCasterState() override;

    void setMagicPower(int magicPower) override;
    void setManaLimit(int manaLimit) override;
    void setManaReserve(int manaReserve) override;
};


#endif //TET_SPELLCASTERSTATE_H
