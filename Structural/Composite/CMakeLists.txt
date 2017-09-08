cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_composite OBJECT
	CompositeTest.h
	CompositeTest.cpp
	PlayerGroup.h
	Party.h
	MiniRaid.h
	VanillaRaid.h
)

set_target_properties(structural_designpatterns_composite PROPERTIES LINKER_LANGUAGE CXX)