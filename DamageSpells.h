//
// Created by Alex on 09.09.18.
//

#ifndef TET_SPELL_H
#define TET_SPELL_H


class DamageSpells
{
private:
    const int needMana = 0;
    const int damage = 0;
public:
    virtual const int getNeedMana() const;
    virtual const int getDamage() const;
};


class WaterVortex : public DamageSpells
{
private:
    const int needMana = 100;
    const int damage = 100;
public:
    virtual const int getNeedMana() const;
    virtual const int getDamage() const;
};

class Fire_Ring : public DamageSpells
{
private:
    const int needMana = 70;
    const int damage = 70;
};

class Frantic_Cold : public DamageSpells
{
private:
    const int needMana = 300;
    const int damage = 300;
};

class PillarOfFire : public DamageSpells
{
private:
    const int needMana = 200;
    const int damage = 200;
};

class Ligthning_Triedent : public DamageSpells
{
private:
    const int needMana = 500;
    const int damage = 500;
};

#endif //TET_SPELL_H
