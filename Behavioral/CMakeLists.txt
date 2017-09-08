cmake_minimum_required(VERSION 3.8)
add_subdirectory(ChainofResponsibility)
add_subdirectory(Command)
add_subdirectory(Interpreter)
add_subdirectory(Iterator)
add_subdirectory(Mediator)
add_subdirectory(Memento)
add_subdirectory(Observer)
add_subdirectory(State)
add_subdirectory(Strategy)
add_subdirectory(TemplateMethod)
add_subdirectory(Visitor)

include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/ChainofResponsibility"
	"${CMAKE_CURRENT_SOURCE_DIR}/Command"
	"${CMAKE_CURRENT_SOURCE_DIR}/Interpreter"
	"${CMAKE_CURRENT_SOURCE_DIR}/Iterator"
	"${CMAKE_CURRENT_SOURCE_DIR}/Mediator"
	"${CMAKE_CURRENT_SOURCE_DIR}/Memento"
	"${CMAKE_CURRENT_SOURCE_DIR}/Observer"
	"${CMAKE_CURRENT_SOURCE_DIR}/State"
	"${CMAKE_CURRENT_SOURCE_DIR}/Strategy"
	"${CMAKE_CURRENT_SOURCE_DIR}/TemplateMethod"
	"${CMAKE_CURRENT_SOURCE_DIR}/Visitor"
)

add_library(behavioral_designpatterns_lib 
	$<TARGET_OBJECTS:behavioral_designpattern_chainofresponsibility> 
	$<TARGET_OBJECTS:behavioral_designpattern_command> 
	$<TARGET_OBJECTS:behavioral_designpattern_interpreter> 	
	$<TARGET_OBJECTS:behavioral_designpattern_iterator> 	
	$<TARGET_OBJECTS:behavioral_designpattern_mediator>	
	$<TARGET_OBJECTS:behavioral_designpattern_memento>	
	$<TARGET_OBJECTS:behavioral_designpattern_observer>	
	$<TARGET_OBJECTS:behavioral_designpattern_state>		
	$<TARGET_OBJECTS:behavioral_designpattern_strategy>	
	$<TARGET_OBJECTS:behavioral_designpattern_templatemethod>	
	$<TARGET_OBJECTS:behavioral_designpattern_visitor>					
)

set_target_properties(behavioral_designpatterns_lib PROPERTIES LINKER_LANGUAGE CXX)