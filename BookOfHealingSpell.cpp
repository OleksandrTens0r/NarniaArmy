//
// Created by Alex on 10.09.18.
//

#include "BookOfHealingSpell.h"

BookOfHealingSpell::BookOfHealingSpell()
{
    life_energy_spell = new Life_Energy_Spell();
    dawn_of_lite = new Dawn_of_Lite();
    whirlwind_of_light = new Whirlwind_of_Light();
    enhaemon = new Enhaemon();
    santino = new Santino();

    spellMap.emplace(LIFE_ENERGY_SPELL, life_energy_spell);
    spellMap.emplace(DAWN_OF_LIFE, dawn_of_lite);
    spellMap.emplace(WHIRLWIND_OF_LIGHT, whirlwind_of_light);
    spellMap.emplace(ENHAEMON, enhaemon);
    spellMap.emplace(SANTINO, santino);
}

int BookOfHealingSpell::getAmountRestoreHp(HealingSpellList spell)
{
    auto it = spellMap.find(spell);
    return it->second->getHealth();;
}

int BookOfHealingSpell::getNeedMana(HealingSpellList spell)
{
    auto it = spellMap.find(spell);
    return it->second->getNeedMana();
}

BookOfHealingSpell::~BookOfHealingSpell()
{
    delete life_energy_spell;
    delete dawn_of_lite;
    delete whirlwind_of_light;
    delete enhaemon;
    delete santino;
}
