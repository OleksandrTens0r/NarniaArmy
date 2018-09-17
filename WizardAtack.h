//
// Created by Alex on 11.09.18.
//

#ifndef TET_WIZARDMAGICATACK_H
#define TET_WIZARDMAGICATACK_H

#include "SpellCasterAtack.h"

class Wizard;

class WizardAtack : public SpellCasterAtack
{
public:
    WizardAtack();
    ~WizardAtack() override;

    void heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell) override;
};


#endif //TET_WIZARDMAGICATACK_H
