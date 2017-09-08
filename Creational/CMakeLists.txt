cmake_minimum_required(VERSION 3.8)

add_subdirectory(Builder)
add_subdirectory(Factory)
add_subdirectory(Prototype)
add_subdirectory(Singleton)

include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/Builder"
	"${CMAKE_CURRENT_SOURCE_DIR}/Factory"
	"${CMAKE_CURRENT_SOURCE_DIR}/Prototype"
	"${CMAKE_CURRENT_SOURCE_DIR}/Singleton")

add_library(creational_designpatterns_lib 
	$<TARGET_OBJECTS:creational_designpatterns_builder> 
	$<TARGET_OBJECTS:creational_designpatterns_factory>
	$<TARGET_OBJECTS:creational_designpatterns_prototype>
	$<TARGET_OBJECTS:creational_designpatterns_singleton>
)

set_target_properties(creational_designpatterns_lib PROPERTIES LINKER_LANGUAGE CXX)