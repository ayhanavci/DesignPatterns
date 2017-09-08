cmake_minimum_required(VERSION 3.8)


add_library(creational_designpatterns_builder OBJECT
	PlayerClass.h
	PlayerClass.cpp
	PlayerClassBuilder.h
	ShamanBuilder.h
	PaladinBuilder.h
	MageBuilder.h
	DruidBuilder.h
	BuilderTest.h
	BuilderTest.cpp)

set_target_properties(creational_designpatterns_builder PROPERTIES LINKER_LANGUAGE CXX)