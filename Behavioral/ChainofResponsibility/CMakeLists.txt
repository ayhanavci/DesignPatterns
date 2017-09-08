cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_chainofresponsibility OBJECT
	ChainofResponsibilityTest.h
	ChainofResponsibilityTest.cpp
	ChasingBoss.h
	DungeonBoss.h
	EnragingBoss.h
	HeavyHittingBoss.h
	ThreatResettingBoss.h
)


set_target_properties(behavioral_designpattern_chainofresponsibility PROPERTIES LINKER_LANGUAGE CXX)