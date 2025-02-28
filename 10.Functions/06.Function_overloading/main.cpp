/*
    . Function overloading:
        . Concept: Functions with the same name but different parameters.
            . The differences may be in the type of the parameters or the number of parameters.
            . The return type is not considered. 
        . Basic examples
        . Overloading to handle arrays and pointers
        . Overloading std::getline: an example.
        . Some fun examples

        All files have been converted to use a header-based compilation model instead of C++20 modules. I've:
            1. Renamed all `.ixx` files to `.h` header files
            2. Added `#pragma once` include guards to all header files
            3. Made all functions `inline` to prevent multiple definition errors
            4. Updated includes and removed module declarations
            5. Updated CMakeLists.txt to remove module-specific settings
            6. Added a proper include directory setting to the CMake file
*/

#include "utilities.h"

int main(){

    //overloading_1_demo();
    //overloading_2_demo();
    //overloading_3_demo();
    overloading_4_demo();
    
}