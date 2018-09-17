#include "Unit.h"

Unit::Unit(const std::string &name, int hitPointsLimit, int atackPower)
{
    state = new UnitState();
    at = new UnitAtack();

    state->setHitPointsLimit(hitPointsLimit);
    state->setHitPoints(hitPointsLimit);
    state->setAtackPower(atackPower);
    state->setName(name);
    state->setForm(HUMAN);
}

void Unit::makeDamage(Unit* unit)
{
    at->atack(this->at, this->state, unit->at, unit->state);
}

void Unit::bite(Unit *unit)
{
    at->bite(this->at, this->state, unit->at, unit->state);
}

void Unit::transformAndAtack(Unit *unit)
{
    at->thansformAndAtack(this->at, this->state, unit->at, unit->state);
}

Unit::~Unit()
{
    delete at;
    delete state;
}

void Unit::heal(Unit *unit, HealingSpellList spell)
{
    at->heal(this->at, this->state, unit->at, unit->state, spell);
}

void Unit::makeMagicDamage(Unit *unit, DamageSpellList spell)
{
    at->magicAtack(this->at, this->state, unit->at, unit->state, spell);
}

void Unit::show()
{
    std::cout << "Name: " << this->state->getName() << std::endl;
    std::cout << "AtackPower: " << this->state->getAtackPower() << std::endl;
    std::cout << "HitPointsLimit: " << this->state->getHitPointsLimit() << std::endl;
    std::cout << "HitPoints: " << this->state->getHitPoints() << std::endl;
}


