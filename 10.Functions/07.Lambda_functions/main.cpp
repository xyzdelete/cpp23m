/*
    . Lambda functions: 
        . Declaring a lambda function and calling it through a name
        . Declare a lambda function and call it directly
        . Lambda function that takes parameters
        . Lambda function that returns something
        . Explicitly specify the return type
        . Capture lists

        These changes convert the project from using C++20 Modules to a traditional headers-based compilation model. The main differences are:

                1. Removed the `export` keywords from function declarations
                2. Added `#pragma once` as an include guard
                3. Changed the file extension from .ixx to .h
                4. Updated main.cpp to use `#include "utilities.h"` instead of `import utilities`
                5. Removed module-related CMake settings (`CMAKE_CXX_SCAN_FOR_MODULES` and `FILE_SET CXX_MODULES`)
                6. Added proper include directory in the CMake file

                The functionality remains the same, but the code now uses the traditional header approach instead of C++20 Modules.

*/

#include <fmt/format.h>
#include "utilities.h"

int main(){
    //declare_and_use_lambda_func();
    //capture_lists();
    //capture_by_value_modification();
    //capture_by_reference_modification();
    //capture_all_by_value();
    capture_all_by_reference();
}