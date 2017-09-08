cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_templatemethod OBJECT
	TemplateMethodTest.h
    TemplateMethodTest.cpp	
    Profession.h
    Jewelcrafting.h
    Alchemy.h	
)
set_target_properties(behavioral_designpattern_templatemethod PROPERTIES LINKER_LANGUAGE CXX)