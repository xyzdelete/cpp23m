module;

#include <fmt/format.h>

export module utilities; 


export void braced_initialization(){
    //Braced initialization
    int elephant_count; // Not explicitly initialized

    int lion_count {}; // Initialized to zero

    int dog_count {20}; // Initialized to 10

    int cat_count {15}; // Initialized to 15

    int domesticated_animals { dog_count + cat_count};

    //int new_number {lion_cout};

    //int narrowing_conversion{2.9};

    fmt::println("Elephant count {}", elephant_count );
    fmt::println("Lion count {}", lion_count);
    fmt::println("Dog count: {}", dog_count);
    fmt::println("Cat count: {}", cat_count);
    fmt::println("Domesticated animals: {}", domesticated_animals);

}


export void functional_initialization(){
    //Functional initialization (With parentheses)
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    //Information lost. less safe than braced initializers
    int narrowing_conversion_functional (2.9);


    fmt::println("Apple count : {}", apple_count);
    fmt::println("Orange count : {}", orange_count);
    fmt::println("Fruit count : {}", fruit_count);
    fmt::println("Narrowing conversion : {}", narrowing_conversion_functional);//Will lose info

}


export void assignment_initialization(){
    //Assignment initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count +truck_count;
    int narrowing_conversion_assignment = 2.9;

    fmt::println("Bike count: {}", bike_count);
    fmt::println("Truck count: {}", truck_count);
    fmt::println("Vehicle count: {}", vehicle_count);
    fmt::println("Narrowing conversion: {}", narrowing_conversion_assignment);

    //Check the size with sizeof
    fmt::println("sizeof int: {}", sizeof(int));
    fmt::println("sizeof truck_count: {}", sizeof(truck_count));
}
