#include <iostream>
#include "Soldier.h"
#include "Vampire.h"
#include "Werewolf.h"
#include "Rogue.h"
#include "Berserker.h"
#include "Unit.h"
#include "Wizard.h"
#include "Healer.h"

//WATER_VORTEX,
//FIRE_RING,
//FRANTIC_COLD,
//PIILLAR_OF_FIRE,
//LIGTHNING_TRIDENT,



int main()
{
//    Soldier* soldier1 = new Soldier("Aristarh", 100, 10);
//    Soldier* soldier2 = new Soldier("Bomm", 100, 10);
//    Soldier* soldier3 = new Soldier("Aristarh2", 100, 10);
//    Vampire* vampire = new Vampire("Dracule", 200, 50);
//    Rogue* rogue = new Rogue("Papa_Karlo", 300, 30);
//    Werewolf* werewolf = new Werewolf("Taylor", 200, 20);
//    Berserker* berserker = new Berserker("Bekerbelli", 200, 100);
    Wizard* wizard = new Wizard("Gendolf", 200, 100, 100, 1000);
    Healer* healer = new Healer("Shaman", 200, 100, 100, 1000);
    //vampire->transformAndAtack(soldier1);

    //berserker->bite(soldier1);

    wizard->show();

    std::cout << "_________________________________" << std::endl;

    try
    {
       healer->makeMagicDamage(wizard, WATER_VORTEX);
    }
    catch(std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
    }

    wizard->show();

//    std::cout <<  *healer << std::endl;
//    std::cout << "--------------------------------" << std::endl;
//    std::cout <<  *wizard << std::endl;

    
    
//    std::cout << "--------------------------------" << std::endl;
//    std::cout << "--------------------------------" << std::endl;
//
//
    return 0;
}
