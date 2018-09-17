//
// Created by Alex on 09.09.18.
//

#include "DamageSpellBook.h"

DamageSpellBook::DamageSpellBook()
{
    waterVortex = new WaterVortex();
    fire_ring = new Fire_Ring();
    frantic_cold = new Frantic_Cold();
    pillarOfFire = new PillarOfFire();
    ligthning_triedent = new Ligthning_Triedent();

    spellMap.emplace(WATER_VORTEX, waterVortex);
    spellMap.emplace(FIRE_RING, fire_ring);
    spellMap.emplace(FRANTIC_COLD, frantic_cold);
    spellMap.emplace(PIILLAR_OF_FIRE, pillarOfFire);
    spellMap.emplace(LIGTHNING_TRIDENT, ligthning_triedent);
}

DamageSpellBook::~DamageSpellBook()
{
    delete waterVortex;
    delete fire_ring;
    delete frantic_cold;
    delete pillarOfFire;
    delete ligthning_triedent;
}

int DamageSpellBook::getNeedMana(DamageSpellList spell)
{
    auto it = spellMap.find(spell);
    return it->second->getNeedMana();
}

int DamageSpellBook::getDamage(DamageSpellList spell)
{
    auto it = spellMap.find(spell);
    return it->second->getDamage();
}

