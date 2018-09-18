//
// Created by Alex on 18.09.18.
//

#include "NecromancerState.h"

NecromancerState::NecromancerState(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit)
                                   : SpellCasterState(name, hitPointsLimit, atackPower, magicPower, manaLimit)
{

}

NecromancerState::~NecromancerState() = default;

void NecromancerState::takeHolyWaterDamage(int Hp)
{
   takeDamage(Hp * 2);
}