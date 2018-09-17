//
// Created by Alex on 04.09.18.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H


#include "Unit.h"

class Soldier : public Unit
{
public:
    Soldier(const std::string &name, int hitPointsLimit, int atackPower);

    ~Soldier() override;
};


#endif //ARMY_SOLDIER_H
