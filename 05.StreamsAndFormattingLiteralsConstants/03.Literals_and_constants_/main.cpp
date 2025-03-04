/*
    . Topics: 
        . Literals
        . Constants
        . constexpr variables
        . constexpr functions
        . consteval functions
        . constinit
*/
#include <fmt/format.h>

import utilities;

//constinit : C++20. Guarantees that the variable is initialized at compile time.
//Initialization with a run-time value will lead to a compiler error.
const constinit int age{24};

int randomizer = 5;
//constinit int  car_count{add(3,randomizer)}; // Error. randomizer is not a compile time value

int main(){

    //literals();
    //constants();
    //constexpr_variables();
    //constexpr_functions();
    //consteval_functions();

    /*
	//constinit double height{1.72}; //Error: 'height': 'constinit' only allowed on a variable 
                                   //declaration with static or thread storage duration
    */
    
}