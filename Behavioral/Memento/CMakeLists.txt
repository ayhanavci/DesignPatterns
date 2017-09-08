cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_memento OBJECT
	MementoTest.h
	MementoTest.cpp		
	ArmorAppearance.h
	PlayerArmor.h
	TransmogMaster.h
)
set_target_properties(behavioral_designpattern_memento PROPERTIES LINKER_LANGUAGE CXX)