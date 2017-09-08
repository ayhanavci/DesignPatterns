cmake_minimum_required(VERSION 3.8)
add_subdirectory(Adapter)
add_subdirectory(Bridge)
add_subdirectory(Composite)
add_subdirectory(Decorator)
add_subdirectory(Facade)
add_subdirectory(Flyweight)
add_subdirectory(Proxy)

include_directories(
	"${CMAKE_CURRENT_SOURCE_DIR}/Adapter"
	"${CMAKE_CURRENT_SOURCE_DIR}/Bridge"
	"${CMAKE_CURRENT_SOURCE_DIR}/Composite"
	"$(CMAKE_CURRENT_SOURCE_DIR)/Decorator"
	"$(CMAKE_CURRENT_SOURCE_DIR)/Facade"
	"$(CMAKE_CURRENT_SOURCE_DIR)/Flyweight"
	"$(CMAKE_CURRENT_SOURCE_DIR)/Proxy"
)

add_library(structural_designpatterns_lib 
	$<TARGET_OBJECTS:structural_designpatterns_adapter> 
	$<TARGET_OBJECTS:structural_designpatterns_bridge>
	$<TARGET_OBJECTS:structural_designpatterns_composite>
	$<TARGET_OBJECTS:structural_designpatterns_decorator>
	$<TARGET_OBJECTS:structural_designpatterns_facade>
	$<TARGET_OBJECTS:structural_designpatterns_flyweight>
	$<TARGET_OBJECTS:structural_designpattern_proxy>
)

set_target_properties(structural_designpatterns_lib PROPERTIES LINKER_LANGUAGE CXX)