//
// Created by Alex on 09.09.18.
//

#ifndef ARMY_2_SPELLBOOK_H
#define ARMY_2_SPELLBOOK_H

#include <map>
#include "DamageSpells.h"

enum DamageSpellList
{
    WATER_VORTEX,
    FIRE_RING,
    FRANTIC_COLD,
    PIILLAR_OF_FIRE,
    LIGTHNING_TRIDENT,
};

class DamageSpellBook
{
public:
    DamageSpellBook();
    virtual ~DamageSpellBook();

    int getNeedMana(DamageSpellList spell);
    int getDamage(DamageSpellList spell);
private:
    std::map<DamageSpellList, DamageSpells*> spellMap;

    WaterVortex* waterVortex;
    Fire_Ring* fire_ring;
    Frantic_Cold* frantic_cold;
    PillarOfFire* pillarOfFire;
    Ligthning_Triedent* ligthning_triedent;
};

#endif //ARMY_2_SPELLBOOK_H


