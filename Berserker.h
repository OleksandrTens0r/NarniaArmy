//
// Created by Alex on 09.09.18.
//

#ifndef ARMY_2_BERSERKER_H
#define ARMY_2_BERSERKER_H

#include "Unit.h"
#include "BerserkerState.h"

class Unit;

class Berserker : public Unit
{
public:
    Berserker(const std::string &name, int hitPointsLimit, int atackPower);
    ~Berserker() override;
};


#endif //ARMY_2_BERSERKER_H
