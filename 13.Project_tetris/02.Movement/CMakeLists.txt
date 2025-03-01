#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

#Keep the project name as Rocket
project(Rocket VERSION 1.0.0 LANGUAGES CXX)

#Require C++23
set(CXX_STANDARD_REQUIRED ON) #Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # Default C++ standard for targets
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(fmt CONFIG REQUIRED)
find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

#We're using the project name as the target name
add_executable(tetris main.cpp)

# Link with SFML
target_link_libraries(tetris PRIVATE fmt::fmt sfml-graphics sfml-window sfml-system)

# Include directories
target_include_directories(tetris PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})