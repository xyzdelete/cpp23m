/*
    . Constexpr and consteval classes: 

        . The requirement for a class to be constexpr is that it provides: 
            . A constexpr constructor
        . Constexpr or consteval classes can have non constexpr member functions.
            . see the print_time() function in the Time24 class.
        . A constexpr function member function can't call a non-constexpr function.
            . fmt::println is not constexpr in the fmt library.
            . We can't call it from the print_time() function.
        . The definitions of constexpr or consteval functions must be available in 
            the header file. If you put it in a separate cpp file,
            you may face issues.
*/

#include "utilities.h"

int main(){
    use_time_demo();
    return 0;
}