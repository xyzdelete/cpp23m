cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(Rocket VERSION 1.0.0 LANGUAGES CXX)

# Set C++23 standard
set(CMAKE_CXX_STANDARD 23)
set(CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(fmt CONFIG REQUIRED)
find_package(ftxui CONFIG REQUIRED)

# Add executable
add_executable(${PROJECT_NAME} main.cpp)        

#Add include directories
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE 
    fmt::fmt 
    ftxui::dom 
    ftxui::screen 
    ftxui::component
)