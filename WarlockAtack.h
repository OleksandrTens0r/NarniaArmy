//
// Created by Alex on 18.09.18.
//

#ifndef ARMY_2_WARLOCKATACK_H
#define ARMY_2_WARLOCKATACK_H

#include "Demon.h"
#include "vector"
#include "SpellCasterAtack.h"

class Warlock;

class WarlockAtack : public SpellCasterAtack
{
private:
    std::vector<Demon*> demons;
    int demonCount;
public:
    WarlockAtack();
    ~WarlockAtack() override;

    Unit* createDemon(UnitState* unitState) override;
};


#endif //ARMY_2_WARLOCKATACK_H
