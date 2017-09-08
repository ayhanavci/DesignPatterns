cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_bridge OBJECT
	Role.h
	DamageDealer.h
	Healer.h
	Tank.h
	PlayerClass.h
	Paladin.h
	Druid.h
	Monk.h
	BridgeTest.h
	BridgeTest.cpp
)

set_target_properties(structural_designpatterns_bridge PROPERTIES LINKER_LANGUAGE CXX)