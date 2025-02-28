/*
    A project to practice reading and writing json and csv data from our C++ program
        . Changing from C++20 Modules to the header based compilation model. We: 
            1. Created a CMakeLists.txt file that doesn't include module-specific configurations
            2. Converted all .ixx module files to .h header files with pragma once guards
            3. Updated include paths and namespace usage
            4. Changed the main.cpp to use #include instead of import statements
            5. Maintained all the functionality while removing module-specific syntax and configurations
            
*/

#include "utilities.h"

int main(){
    //utilities::csv_demo();
    utilities::json_demo();
}