//
// Created by Alex on 04.09.18.
//

#ifndef ARMY_VAMPIRE_H
#define ARMY_VAMPIRE_H


#include "Unit.h"
#include "VampireAtack.h"
#include "VampireState.h"

class Vampire : public Unit
{
public:
    Vampire(const std::string &name, int hitPointsLimit, int atackPower);

    ~Vampire() override;
};


#endif //ARMY_VAMPIRE_H
