//
// Created by Alex on 09.09.18.
//

#ifndef TET_SPELLCASTERATACK_H
#define TET_SPELLCASTERATACK_H

#include "Unit.h"
#include "UnitAtack.h"
#include "SpellCasterState.h"

class SpellCasterAtack : public UnitAtack
{
private:
    BookOfHealingSpell* bookHlSp;
    DamageSpellBook* bookDmSp;
public:
    SpellCasterAtack();

    ~SpellCasterAtack() override;

    BookOfHealingSpell* getBookHlSp() const;
    DamageSpellBook* getBookDmSp() const;

    void magicAtack(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, DamageSpellList spell) override;

    void heal(UnitAtack* attackerAtack, UnitState* attackerState, UnitAtack* victimAtack, UnitState* victimState, HealingSpellList spell) override;
};


#endif //TET_SPELLCASTERATACK_H
