//
// Created by Alex on 08.09.18.
//

#ifndef TET_ROGUE_H
#define TET_ROGUE_H


#include "Unit.h"

class Rogue : public Unit
{
public:
    Rogue(const std::string &name, int hitPointsLimit, int atackPower);

    ~Rogue() override;
};


#endif //TET_ROGUE_H
