#include <iostream>
#include "Soldier.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Rogue.h"
#include "Berserker.h"
#include "Unit.h"
#include "Wizard.h"
#include "Healer.h"
#include "Warlock.h"
#include "Necromancer.h"

//-------------
// Read Me
//-------------
//
//Any unit takes at least 3 parameters
//
//Unit(const std::string &name, int hitPointsLimit, int atackPower);
//
//Mag takes 4 parameters
//
//SpellCaster(const std::string &name, int hitPointsLimit ,int atackPower, int manaLimit);
//
// if you want to use magic attack you must transfer one of kind spells such as:
//
//Combat Spells
//
//WATER_VORTEX - needMana = 100 // damage = 100
//FIRE_RING - needMana = 70 // damage = 70
//FRANTIC_COLD - needMana = 300 ...
//PIILLAR_OF_FIRE - needMana = 200 ...
//LIGTHNING_TRIDENT - needMana = 500 ...
//
// and if you want to heal some unit you must transfer one of kind healing spells
//
//Healing Spells
//
//LIFE_ENERGY_SPELL - needMana = 50, health = 50
//DAWN_OF_LIFE - needMana = 70 ...
//WHIRLWIND_OF_LIGHT - needMana = 100 ...
//ENHAEMON needMana = 200 ...
//SANTINO - needMana = 500 ...

// (mana == damage) - true



int main()
{
    Soldier* soldier = new Soldier("Aristarh", 1000, 200);
    Wizard* wizard = new Wizard("Gendolf", 200, 100, 1000);
    Healer* healer = new Healer("Shaman", 200, 100, 1000);
    Warlock* warlock = new Warlock("Hs", 200, 100, 1000);
    Necromancer* necromancer = new Necromancer("Kell-Tyzzer", 200, 100, 1000);

    try
    {

    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
