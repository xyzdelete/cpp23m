#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

#The project name is set here.
project(Rocket VERSION 0.1.0 LANGUAGES CXX)

#Require C++23
set(CXX_STANDARD_REQUIRED ON) #Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # C++23 standard for targets
set(CMAKE_CXX_EXTENSIONS OFF)

# Find SFML package
find_package(SFML COMPONENTS graphics window system REQUIRED)

# Add the executable
add_executable(Rocket 
    main.cpp
)

# Include directories
target_include_directories(Rocket PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link SFML libraries
target_link_libraries(Rocket PRIVATE sfml-graphics sfml-window sfml-system)