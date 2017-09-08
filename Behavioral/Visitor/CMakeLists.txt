cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_visitor OBJECT
	VisitorTest.h
    VisitorTest.cpp	 	
    Vendor.h
    ArmorVendor.h
    FruitVendor.h
    Player.h
    HungryTroll.h
    HungryTroll.cpp
    NoobWarrior.h
    NoobWarrior.cpp
    TreeHugger.h
    TreeHugger.cpp
)
set_target_properties(behavioral_designpattern_visitor PROPERTIES LINKER_LANGUAGE CXX)