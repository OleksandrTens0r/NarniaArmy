//
// Created by Alex on 03.09.18.
//

#ifndef ARMY_UNITSTATE_H
#define ARMY_UNITSTATE_H

#include <iostream>
#include <string>
#include "list"

class Unit;

enum Form {HUMAN, WOLF};

class UnitState
{
private:
    std::string name;
    Form form;
    int hitPointsLimit;
    int hitPoints;
    int atackPower;

    bool _notify;
    std::list<UnitState*> observers;
protected:
    virtual void update();

    int manaLimit;
    int manaReserve;
public:
    UnitState();

    const std::string &getName() const;
    int getHitPointsLimit() const;
    int getHitPoints() const;
    int getAtackPower() const;
    Form getForm() const;
    int getManaLimit() const;
    int getManaReserve() const;


    void setName(const std::string &name);
    void setHitPointsLimit(int hitPointsLimit);
    void setHitPoints(int hitPoints);
    void setAtackPower(int atackPower);
    void setForm(Form form);

    virtual void setManaLimit(int manaLimit);
    virtual void setManaReserve(int manaReserve);


    bool ensureIsAlive();


    virtual void addHp(int Hp);

    virtual void takeDamage(int Hp);
    virtual void takeMagicDamage(int Hp);
    virtual void takeMana(int mana);
    virtual void takeHolyWaterDamage(int Hp);

    virtual void addObserver(UnitState* observer);
    virtual void removeObserver(UnitState* observer);

    virtual ~UnitState();
};


#endif //ARMY_UNITSTATE_H
