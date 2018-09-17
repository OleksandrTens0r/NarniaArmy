//
// Created by Alex on 11.09.18.
//

#include "Wizard.h"

Wizard::Wizard(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit)
        : SpellCaster(name, hitPointsLimit, atackPower, magicPower, manaLimit)
{
    delete at;

    at = new WizardAtack();
}

Wizard::~Wizard() = default;
