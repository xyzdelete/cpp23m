/*
    . Exploring variables and data types
*/

#include <fmt/format.h>

// One line comment
import utilities;

int main() {

    //number_systems();

    //floating_point_types();


    fmt::println("The range for int is from {} to {}", 
                                    std::numeric_limits<int>::min(),
                                    std::numeric_limits<int>::max());
    fmt::println("The range for float is from {} to {}", 
                                    std::numeric_limits<float>::min(),
                                    std::numeric_limits<float>::max());

    fmt::println("The range for double is from {} to {}", 
                                    std::numeric_limits<double>::min(),
                                    std::numeric_limits<double>::max());

    fmt::println("The range for long double is from {} to {}", 
                                    std::numeric_limits<long double>::min(),
                                    std::numeric_limits<long double>::max());
}