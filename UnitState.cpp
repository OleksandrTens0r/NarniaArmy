//
// Created by Alex on 03.09.18.
//

#include "UnitState.h"

UnitState::UnitState()
{
    _notify = true;
}

UnitState::~UnitState()
{
    observers.clear();
}

const std::string &UnitState::getName() const
{
    return name;
}

int UnitState::getHitPointsLimit() const
{
    return hitPointsLimit;
}

int UnitState::getHitPoints() const
{
    return hitPoints;
}

int UnitState::getAtackPower() const
{
    return atackPower;
}

void UnitState::setName(const std::string &name)
{
    UnitState::name = name;
}

void UnitState::setHitPointsLimit(int hitPointsLimit)
{
    UnitState::hitPointsLimit = hitPointsLimit;
}

void UnitState::setHitPoints(int hitPoints)
{
    UnitState::hitPoints = hitPoints;
}

void UnitState::setAtackPower(int atackPower)
{
    UnitState::atackPower = atackPower;
}

bool UnitState::ensureIsAlive()
{
    return hitPoints > 0;
}

void UnitState::addHp(int Hp)
{
    if ( this->ensureIsAlive() )
    {
        this->hitPoints += Hp;

        if ( this->hitPoints > this->hitPointsLimit )
        {
            this->hitPoints = this->hitPointsLimit;
        }
    }
}

void UnitState::takeDamage(int Hp)
{
    if ( this->ensureIsAlive() )
    {
        this->hitPoints -= Hp;

        if ( this->hitPoints <= 0 )
        {
            if ( _notify )
            {
                update();
                _notify = false;
            }
            this->hitPoints = 0;
        }
    }
}

void UnitState::takeMagicDamage(int Hp)
{
    takeDamage(Hp);
}

Form UnitState::getForm() const
{
    return form;
}

void UnitState::setForm(Form form)
{
    UnitState::form = form;
}

// For spellCaster Units

int UnitState::getMagicPower() const
{
    return magicPower;
}

void UnitState::setMagicPower(int magicPower)
{
    UnitState::magicPower = 0;
}

int UnitState::getManaLimit() const
{
    return manaLimit;
}

void UnitState::setManaLimit(int manaLimit)
{
    UnitState::manaLimit = 0;
}

int UnitState::getManaReserve() const
{
    return manaReserve;
}

void UnitState::setManaReserve(int manaReserve)
{
    UnitState::manaReserve = 0;
}

void UnitState::takeMana(int mana)
{
    this->manaReserve -= mana;

    if ( manaReserve < 0 )
    {
        manaReserve = 0;
    }
}

void UnitState::takeHolyWaterDamage(int Hp)
{
    takeDamage(Hp);
}

void UnitState::update()
{
    for ( auto x : observers )
    {
        x->addHp(this->getHitPointsLimit() / 4);
    }
}

void UnitState::addObserver(UnitState* observer)
{
    observers.push_back(observer);
}

void UnitState::removeObserver(UnitState* observer)
{
    observers.remove(observer);
}
