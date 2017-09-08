cmake_minimum_required(VERSION 3.8)

add_library(structural_designpattern_proxy OBJECT
	ProxyTest.h
	ProxyTest.cpp
	Healer.h
	Shaman.h
	ShamanPvpProxy.h
)

set_target_properties(structural_designpattern_proxy PROPERTIES LINKER_LANGUAGE CXX)