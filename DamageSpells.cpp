//
// Created by Alex on 09.09.18.
//

#include "DamageSpells.h"

const int DamageSpells::getNeedMana() const
{
    return needMana;
}

const int DamageSpells::getDamage() const
{
    return damage;
}

const int WaterVortex::getDamage() const {
    return damage;
}

const int WaterVortex::getNeedMana() const {
    return needMana;
}
