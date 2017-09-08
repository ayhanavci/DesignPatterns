cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_iterator OBJECT
	IteratorTest.h
	IteratorTest.cpp	
	MiniRaid.h
	Player.h
	RaidIterator.h
)
set_target_properties(behavioral_designpattern_iterator PROPERTIES LINKER_LANGUAGE CXX)