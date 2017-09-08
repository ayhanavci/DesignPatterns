cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_flyweight OBJECT
	FlyWeightTest.h
	FlyWeightTest.cpp	
	Human.h
	HumanBaseStats.h
	Orc.h
	OrcBaseStats.h
	PlayerRace.h
)

set_target_properties(structural_designpatterns_flyweight PROPERTIES LINKER_LANGUAGE CXX)