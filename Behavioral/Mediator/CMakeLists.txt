cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_mediator OBJECT
	MediatorTest.h
	MediatorTest.cpp	
	Player.h
	Player.cpp
	Healer.h
	DamageDealer.h
	Tank.h
	RaidLeader.h
	RaidLeader.cpp
	Boss.h
	Boss.cpp
)
set_target_properties(behavioral_designpattern_mediator PROPERTIES LINKER_LANGUAGE CXX)