/*
    . ATTENTION: 
        . In this header based implementation, if a function is fully defined 
            in a header file, we use the inline keyword to avoid multiple
            definition errors. 
        . If it's included in multiple files, the linker will complain about
            multiple definitions of the same function, if it's not marked as inline.
    . Idea: The basics of functions and how to separate them across multiple files.
        . Will introduce some concepts about modules: 
            . Separating declarations and definitions in the same file.
            . Separating declarations and definitions across multiple files modeled as modules.
    . Function basics: 
        . First hand on functions
        . Declaration and definition
        . Multiple files
        . Declarations and definitions in the main.cpp file
            . minimum
            . maximum
            . inc_mult
        . Multiple files: 
            . declarations and definition separated in module file: math.ixx
            . Putting definitions in math_impl.cpp
            . Separating the declarations and definitions across operation and compare modules.

*/
#include <fmt/format.h>
#include "utilities.h"
#include "compare.h"
#include "math.h"

/*
[return type] name (paramter list){
    [function body]
}
*/

// Function declaration
/*

*/



int main(){

    //Call the function
    using namespace it_1;
    //using namespace it_2;
    int x{10};
    int y{20};
    auto result = add(7,3);
    result = add(11,20);
    fmt::println("Result: {}", result);

    result = maximum(x, y);
    fmt::println("Result max: {}", result);

    result = minimum(x, y);
    fmt::println("Result min: {}", result);

    result = inc_mult(x, y);
    fmt::println("Result inc_mult: {}", result);


    //Other functions
    print_number(10);
    say_hello();

}

