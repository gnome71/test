cmake_minimum_required(VERSION 2.8.11)

project(vstest)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Core REQUIRED)
if(Qt5Core_FOUND)
	get_target_property(QtCore_LIB Qt5::Core LOCATION)
	include_directories(${Qt5Core_INCLUDE_DIRS})
	add_definitions(${Qt5Core_DEFINITIONS})
	message(STATUS "Qt5Core found v" ${Qt5Core_VERSION})
	message(STATUS ${QtCore_LIB})
	message(STATUS ${Qt5Core_DEFINITIONS})
endif(Qt5Core_FOUND)

# Tell CMake to create the helloworld executable
add_executable(${PROJECT_NAME} "main.cpp")

# Use the Widgets module from Qt 5.
target_link_libraries(${PROJECT_NAME} 
	${QtCore_LIB}
)
