cmake_minimum_required(VERSION 3.8)
set (CMAKE_CXX_STANDARD 14)
project(design_patterns)
set (VERSION_MAJOR 1)
set (VERSION_MINOR 0)

add_subdirectory(Creational)
add_subdirectory(Structural)
add_subdirectory(Behavioral)

include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/Include"
	"${CMAKE_CURRENT_SOURCE_DIR}/Creational"
	"${CMAKE_CURRENT_SOURCE_DIR}/Structural"
	"${CMAKE_CURRENT_SOURCE_DIR}/Behavioral"
)

add_executable(design_patterns main.cpp)

target_link_libraries(design_patterns 
	creational_designpatterns_lib 
	structural_designpatterns_lib
	behavioral_designpatterns_lib
)

set_target_properties(design_patterns PROPERTIES FOLDER "DesignPatterns")