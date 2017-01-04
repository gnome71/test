cmake_minimum_required(VERSION 2.8.11)

project(vstest)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Core REQUIRED)
get_target_property(Qt5Core_LIB Qt5::Core LOCATION)

# Tell CMake to create the helloworld executable
add_executable(${PROJECT_NAME} "main.cpp")

# Use the Widgets module from Qt 5.
target_link_libraries(${PROJECT_NAME} 
	Qt5Core_LIB
)
