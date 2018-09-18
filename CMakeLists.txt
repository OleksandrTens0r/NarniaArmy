cmake_minimum_required(VERSION 3.12)
project(Army_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Army_2
        Berserker.cpp
        Berserker.h
        BerserkerState.cpp
        BerserkerState.h
        BookOfHealingSpell.cpp
        BookOfHealingSpell.h
        DamageSpellBook.cpp
        DamageSpellBook.h
        DamageSpells.cpp
        DamageSpells.h
        Healer.cpp
        Healer.h
        HealerAtack.cpp
        HealerAtack.h
        HealingSpells.cpp
        HealingSpells.h
        IncorrectAction.cpp
        IncorrectAction.h
        main.cpp
        Priest.cpp
        Priest.h
        PriestArtack.cpp
        PriestArtack.h
        Rogue.cpp
        Rogue.h
        RogueAtack.cpp
        RogueAtack.h
        Soldier.cpp
        Soldier.h
        SpellCaster.cpp
        SpellCaster.h
        SpellCasterAtack.cpp
        SpellCasterAtack.h
        SpellCasterState.cpp
        SpellCasterState.h
        Unit.cpp
        Unit.h
        UnitAtack.cpp
        UnitAtack.h
        UnitState.cpp
        UnitState.h
        Vampire.cpp
        Vampire.h
        VampireAtack.cpp
        VampireAtack.h
        VampireState.cpp
        VampireState.h
        Werewolf.cpp
        Werewolf.h
        WerewolfAtack.cpp
        WerewolfAtack.h
        WerewolfState.cpp
        WerewolfState.h
        Wizard.cpp
        Wizard.h
        WizardAtack.cpp
        WizardAtack.h Warlock.cpp Warlock.h WarlockAtack.cpp WarlockAtack.h Demon.cpp Demon.h Necromancer.cpp Necromancer.h NecromancerAtack.cpp NecromancerAtack.h NecromancerState.cpp NecromancerState.h)
