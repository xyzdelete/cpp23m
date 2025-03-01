#The root CMakeLists.txt file.
cmake_minimum_required(VERSION 3.28)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# The project name is set here. In this case it's Rocket.
project(Rocket VERSION 1.0.0 LANGUAGES CXX)

# Require C++23
set(CXX_STANDARD_REQUIRED ON) # Make C++23 a hard requirement
set(CMAKE_CXX_STANDARD 23) # Default C++ standard for targets

# Add the src subdirectory
add_subdirectory(src)

