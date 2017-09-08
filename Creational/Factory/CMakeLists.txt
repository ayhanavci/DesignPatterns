cmake_minimum_required(VERSION 3.8)

add_library(creational_designpatterns_factory OBJECT
	DeathKnight.h
	Druid.h
	Warrior.h
	Paladin.h
	Rogue.h
	FactoryTest.h
	FactoryTest.cpp	
	PlateTeamFactory.h
	StealthTeamFactory.h
	PlayerClass.h	
	TeamFactory.h	
	LookingForGroupTool.h
)

set_target_properties(creational_designpatterns_factory PROPERTIES LINKER_LANGUAGE CXX)