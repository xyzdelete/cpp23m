#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

#The project name is set here. Keep it as Rocket.
project(Rocket LANGUAGES CXX VERSION 0.1.0)

#Require C++23
set(CXX_STANDARD_REQUIRED ON) #Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # Default C++ standard for targets
set(CMAKE_CXX_SCAN_FOR_MODULES ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(fmt CONFIG REQUIRED)

# Add the executable target
add_executable(Rocket 
    main.cpp 
    ct1.h 
    ct2.h
    ct3.h
    ct3.cpp 
    ct4.h
    ct4.cpp
    ct5.h
    ct5.cpp
    ct6.h
    ct6.cpp
    ct7.h
    ct8.h
    ct9.h
    ct10.h 
    ct11.h
    ct12.h
    ct13.h
    ct14.h
    ct15.h
    ct16.h
    ct17.h
    utilities.h 
)

# Add header files - set up source dir as an include dir
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Add modules
target_sources(${PROJECT_NAME}
    PUBLIC
    FILE_SET CXX_MODULES FILES
)

#Add include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
# Link with fmt library
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)