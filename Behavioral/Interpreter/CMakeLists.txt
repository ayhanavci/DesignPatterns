cmake_minimum_required(VERSION 3.8)

add_library(behavioral_designpattern_interpreter OBJECT
	InterpreterTest.h
	InterpreterTest.cpp
	Expression.h
	Language.h
	SentenceInterpreter.h
	SentenceInterpreter.cpp
	SingleWordInterpreter.h
)
set_target_properties(behavioral_designpattern_interpreter PROPERTIES LINKER_LANGUAGE CXX)