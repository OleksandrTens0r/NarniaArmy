//
// Created by Alex on 10.09.18.
//

#ifndef TET_HEALINGSPELLS_H
#define TET_HEALINGSPELLS_H


class HealingSpells
{
private:
    const int needMana = 0;
    const int health = 0;
public:
    virtual const int getNeedMana() const;
    virtual const int getHealth() const;
};

class Life_Energy_Spell : public HealingSpells
{
private:
    const int needMana = 50;
    const int health = 50;
};

class Dawn_of_Lite : public HealingSpells
{
private:
    const int needMana = 70;
    const int health = 70;
};

class Whirlwind_of_Light : public HealingSpells
{
private:
    const int needMana = 100;
    const int health = 100;
};

class Enhaemon : public HealingSpells
{
private:
    const int needMana = 120;
    const int health = 120;
};

class Santino : public HealingSpells
{
private:
    const int needMana = 150;
    const int health = 150;
};

#endif //TET_HEALINGSPELLS_H
