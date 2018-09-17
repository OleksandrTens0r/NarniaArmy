//
// Created by Alex on 10.09.18.
//

#ifndef ARMY_2_BOOKOFHEALINGSPELL_H
#define ARMY_2_BOOKOFHEALINGSPELL_H

#include <iostream>
#include <map>
#include "HealingSpells.h"

enum HealingSpellList
{
    LIFE_ENERGY_SPELL,
    DAWN_OF_LIFE,
    WHIRLWIND_OF_LIGHT,
    ENHAEMON,
    SANTINO,
};

class BookOfHealingSpell
{
public:
    BookOfHealingSpell();
    virtual ~BookOfHealingSpell();

    int getAmountRestoreHp(HealingSpellList spell);
    int getNeedMana(HealingSpellList spell);
private:
    std::map<HealingSpellList, HealingSpells*> spellMap;

    Life_Energy_Spell* life_energy_spell;
    Dawn_of_Lite* dawn_of_lite;
    Whirlwind_of_Light* whirlwind_of_light;
    Enhaemon* enhaemon;
    Santino* santino;
};


#endif //ARMY_2_BOOKOFHEALINGSPELL_H
