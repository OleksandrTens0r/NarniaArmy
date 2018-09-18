//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_DEMON_H
#define ARMY_2_DEMON_H

#include "Unit.h"

class Demon : public Unit
{
public:
    Demon(const std::string &name, int hitPointsLimit, int atackPower);

    ~Demon() override;
};


#endif //ARMY_2_DEMON_H
