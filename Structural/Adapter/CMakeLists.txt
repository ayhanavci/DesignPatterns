cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_adapter OBJECT
	Healer.h
	DamageDealer.h
	Priest.h
	Rogue.h
	Hunter.h
	HealerAdapter.h
	HealerRotation.h
	AdapterTest.h
	AdapterTest.cpp)

set_target_properties(structural_designpatterns_adapter PROPERTIES LINKER_LANGUAGE CXX)