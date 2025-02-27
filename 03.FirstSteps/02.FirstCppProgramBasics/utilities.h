#ifndef UTILITIES_H
#define UTILITIES_H

#include <fmt/format.h>

int add_number(int first_parameter, int second_parameter){
    return first_parameter + second_parameter;
}

void do_work(){
    fmt::print("Hello");
    fmt::print("World");
    fmt::print("\n");

    int num1 {5};
    int num2 {6};
    int result = add_number(num1,num2);
    fmt::println("Result: {}", result);
    fmt::println("Doing something inside do_work");
}

#endif // UTILITIES_H
