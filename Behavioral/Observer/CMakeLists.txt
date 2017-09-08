cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_observer OBJECT
	ObserverTest.h
	ObserverTest.cpp		
	DeadlyBossMods.h
	Player.h
	Tank.h
	Healer.h
	DamageDealer.h
)
set_target_properties(behavioral_designpattern_observer PROPERTIES LINKER_LANGUAGE CXX)