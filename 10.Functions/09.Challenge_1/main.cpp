/*
    . Breaking up the sfml application into functions

    . Changes from C++20 modules to the header compilation model. We have: 
        1. Converted `utilities.ixx` to `utilities.h`, using `#pragma once` as an include guard
        2. Removed the module declarations and export keywords
        3. Updated `main.cpp` to use `#include "utilities.h"` instead of `import utilities`
        4. Created a new CMakeLists.txt that doesn't include any modules-specific configuration
        5. Made sure all functionality is preserved in the header file

        Now the project should compile using the traditional headers compilation model.
*/

#include "utilities.h"

int main(){

    //it_1::app();
    it_2::app();
    
}