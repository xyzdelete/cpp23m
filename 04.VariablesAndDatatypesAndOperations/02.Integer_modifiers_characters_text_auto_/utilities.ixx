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


export void integer_modifiers(){
    //Signed and unsigned modifiers
    signed int value1 {10}; // both negative and positive values
    signed int value2 {-20};
    unsigned int value3 {300};

    fmt::println("Value1: {}", value1);
    fmt::println("Value2: {}", value2);
    fmt::println("Value3: {}", value3);

    //Short and long
    short int short_var {-32768}; // 2 Bytes
    short int short_int{ 455 };//
    signed short signed_short{ 122 };//
    signed short int signed_short_int{ -456 };//
    unsigned short int unsigned_short_int{ 456 };

    long long_var{ 88 };// 4 OR 8 Bytes
    long int long_int{ 33 };
    signed long signed_long{ 44 };
    signed long int signed_long_int{ 44 };
    unsigned long int unsigned_long_int{ 44 };


    long long long_long{ 888 };// 8 Bytes
    long long int long_long_int{ 999 };
    signed long long signed_long_long{ 444 };
    signed long long int signed_long_long_int{ 1234 };
    unsigned long long int unsigned_long_long_int{ 1234 };


    fmt::println("Short variable : {}, size : {} bytes", short_var, sizeof(short));
    fmt::println("Short Int : {}, size : {} bytes", short_int, sizeof(short int));
    fmt::println("Signed short : {}, size : {} bytes", signed_short, sizeof(signed short));
    fmt::println("Signed short int : {}, size : {} bytes", signed_short_int, sizeof(signed short int));
    fmt::println("unsigned short int : {}, size : {} bytes", unsigned_short_int, sizeof(unsigned short int));
    fmt::println("---------------------");

    fmt::println("Long variable : {}, size : {} bytes", long_var, sizeof(long));
    fmt::println("Long int : {}, size : {} bytes", long_int, sizeof(long int));
    fmt::println("Signed long : {}, size : {} bytes", signed_long, sizeof(signed long));
    fmt::println("Signed long int : {}, size : {} bytes", signed_long_int, sizeof(signed long int));
    fmt::println("unsigned long int : {}, size : {} bytes", unsigned_long_int, sizeof(unsigned long int));
    fmt::println("---------------------");

    fmt::println("Long long : {}, size : {} bytes", long_long, sizeof(long long));
    fmt::println("Long long int : {}, size : {} bytes", long_long_int, sizeof(long long int));
    fmt::println("Signed long long : {}, size : {} bytes", signed_long_long, sizeof(signed long long));
    fmt::println("Signed long long int : {}, size : {} bytes", signed_long_long_int, sizeof(signed long long int));
    fmt::println("unsigned long long int : {}, size : {} bytes", unsigned_long_long_int, sizeof(unsigned long long int));
    fmt::println("---------------------");
}
