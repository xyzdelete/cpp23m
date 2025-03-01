#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

#The project name is set here. In this case it's Rocket, but you can change it to whatever you want.
project(Rocket  VERSION 1.0.0 LANGUAGES CXX)

#Require C++23
set(CXX_STANDARD_REQUIRED ON) #Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # Default C++ standard for targets
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

find_package(fmt CONFIG REQUIRED)

#We're using the project name as the target name, but you can change it to make them different.
#With this setup, the name of the executable will be the same as the project name.
add_executable(${PROJECT_NAME} 
        utilities.h 
        main.cpp 
        pixel.h
        pixel.cpp 
        canvas.h
        canvas.cpp
        move_semantics_01.h
        move_semantics_02.h
        move_semantics_03.h
)

#Add include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR})
#Link fmt
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)