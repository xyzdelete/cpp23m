#pragma once
#include <fmt/format.h>

//Function that takes one input and doesn't return anything
inline void print_number(auto number){
    fmt::println("number: {}", number);
}

// Function that doesnt' take parameters and returns nothing
inline void say_hello()
{
    fmt::println("Hello there");
    return;// You could omit this return statement for functions returning void
}
