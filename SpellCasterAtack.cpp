//
// Created by Alex on 09.09.18.
//

#include "SpellCasterAtack.h"

SpellCasterAtack::SpellCasterAtack()
{
    bookHlSp = new BookOfHealingSpell();
    bookDmSp = new DamageSpellBook();
};

SpellCasterAtack::~SpellCasterAtack()
{
    bookHlSp = new BookOfHealingSpell();
    bookDmSp = new DamageSpellBook();
}

void SpellCasterAtack::heal(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState, HealingSpellList spell)
{
    if ( attackerState->ensureIsAlive() )
    {
        int tmpNeedMana = bookHlSp->getNeedMana(spell);

        if ( attackerState->getManaReserve() >= tmpNeedMana )
        {
            victimState->addHp(bookHlSp->getAmountRestoreHp(spell));

            attackerState->takeMana(tmpNeedMana);
        }
    }
}

void SpellCasterAtack::magicAtack(UnitAtack *attackerAtack, UnitState *attackerState, UnitAtack *victimAtack, UnitState *victimState, DamageSpellList spell)
{
    if ( attackerState->ensureIsAlive() )
    {
        int tmpNeedMana = bookDmSp->getNeedMana(spell);

        if ( attackerState->getManaReserve() >= tmpNeedMana )
        {
            victimState->takeMagicDamage(bookDmSp->getDamage(spell));

            attackerState->takeMana(tmpNeedMana);
        }
    }
}

BookOfHealingSpell *SpellCasterAtack::getBookHlSp() const
{
    return bookHlSp;
}

DamageSpellBook *SpellCasterAtack::getBookDmSp() const
{
    return bookDmSp;
}
