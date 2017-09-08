cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_strategy OBJECT
	StrategyTest.h
    StrategyTest.cpp		
    DamageDealer.h
    PlayerClass.h
    Rogue.h
    Mage.h
    Hunter.h
)
set_target_properties(behavioral_designpattern_strategy PROPERTIES LINKER_LANGUAGE CXX)