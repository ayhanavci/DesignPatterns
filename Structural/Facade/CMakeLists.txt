cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_facade OBJECT
	FacadeTest.h
	FacadeTest.cpp
	PlayerClass.h
	Paladin.h
	Priest.h
	Rogue.h
	Warlock.h
	Warrior.h
)

set_target_properties(structural_designpatterns_facade PROPERTIES LINKER_LANGUAGE CXX)