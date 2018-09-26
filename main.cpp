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

// Spells for mag

//WATER_VORTEX,
//FIRE_RING,
//FRANTIC_COLD,
//PIILLAR_OF_FIRE,
//LIGTHNING_TRIDENT,

//LIFE_ENERGY_SPELL,
//DAWN_OF_LIFE,
//WHIRLWIND_OF_LIGHT,
//ENHAEMON,
//SANTINO,


int main()
{
    Soldier* soldier1 = new Soldier("Aristarh", 200, 200);
    Soldier* soldier2 = new Soldier("Bomm", 100, 10);
    Wizard* wizard = new Wizard("Gendolf", 200, 100, 100, 1000);
    Healer* healer = new Healer("Shaman", 200, 100, 100, 1000);
    Warlock* warlock = new Warlock("Shaman", 200, 100, 100, 1000);
    Necromancer* necromancer = new Necromancer("Kell-Tyzzer", 200, 100, 100, 1000);
    //vampire->transformAndAtack(soldier1);

    //berserker->bite(soldier1);


    std::cout << "_________________________________" << std::endl;

    try
    {
       warlock->makeDamage(soldier1);
       healer->heal(soldier1, DAWN_OF_LIFE);
       healer->heal(soldier1, SANTINO);
       warlock->show();
       soldier1->show();

    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}
