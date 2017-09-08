cmake_minimum_required(VERSION 3.8)

add_library(structural_designpatterns_decorator OBJECT
	DecoratorTest.h
	DecoratorTest.cpp
	Armor.h
	ArmorItem.h
	ArmorDecorator.h
	ArmorWithSockets.h
	ArmorWithSlot.h
	ArmorWithAC.h
	ArmorWithEnchantment.h
)

set_target_properties(structural_designpatterns_decorator PROPERTIES LINKER_LANGUAGE CXX)