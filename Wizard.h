//
// Created by Alex on 11.09.18.
//

#ifndef TET_WIZARD_H
#define TET_WIZARD_H


#include "SpellCaster.h"
#include "WizardAtack.h"

class Wizard : public SpellCaster
{
public:
    Wizard(const std::string &name, int hitPointsLimit, int atackPower, int magicPower, int manaLimit);

    ~Wizard() override;
};


#endif //TET_WIZARD_H
