cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_state OBJECT
	StateTest.h
    StateTest.cpp		
    Warrior.h
    WarriorStance.h
    BattleStance.h
    DefensiveStance.h
    BerserkerStance.h
)
set_target_properties(behavioral_designpattern_state PROPERTIES LINKER_LANGUAGE CXX)