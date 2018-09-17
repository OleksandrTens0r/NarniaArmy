//
// Created by Alex on 08.09.18.
//

#ifndef TET_WEREWOLFSTATE_H
#define TET_WEREWOLFSTATE_H

#include "UnitState.h"

class WerewolfState : public UnitState
{
public:
    WerewolfState(const std::string &name, int hitPointsLimit, int atackPower);
    virtual ~WerewolfState();
};


#endif //TET_WEREWOLFSTATE_H
