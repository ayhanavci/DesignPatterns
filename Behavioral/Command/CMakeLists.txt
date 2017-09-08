cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_command OBJECT
	CommandTest.h
	CommandTest.cpp
	Armor.h
	Profession.h
	ProfessionCommand.h
	ProfessionControl.h
	Enchanting.h
	Engineering.h
	Jewelcrafting.h
	WordofAgilityCommand.h
	GoblinGliderCommand.h
	MarkOfTheClawCommand.h
	PrismaticSocketCommand.h
	RedSocketCommand.h
	RocketsCommand.h
)


set_target_properties(behavioral_designpattern_command PROPERTIES LINKER_LANGUAGE CXX)