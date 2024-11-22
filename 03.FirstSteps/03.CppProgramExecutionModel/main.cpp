/*
    . Exploring the C++ program execution model
*/

// One line comment

#include <string_view>
#include <fmt/format.h>

import utilities;


int f_add(int a, int b){
    return a + b;
}

void print_msg( std::string_view msg){
    fmt::println("{}", msg);
}

int main() {
    int a = 10;
    int b = 5;
    int c;

    print_msg("Statement 1");
    print_msg("Statement 2");
    c = f_add(a, b);
    fmt::println("Result: {}", c);
    print_msg("Statement 3");
    print_msg("Statement 4");

    return 0;
}