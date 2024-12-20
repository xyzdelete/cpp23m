module;

#include <fmt/format.h>
#include <vector>

export module utilities; 

export void for_loop(){
    //Print I love C++ 10 times: The bad way to do things
    /*
    fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
	fmt::println( "I love C++" );
    */

    //for loop
    /*
    for( unsigned int i{0}; i < 10; ++i){
	    fmt::println( "{}: I love C++", i );
    }
    */

    // Use size_t : a representation of some unsigned int for positive numbers [sizes]
    /*
	for(size_t i{0} ; i < 10 ; ++i){
		fmt::println( "{}: I love C++", i );
	}
	fmt::println( "Loop done!" );

	//sizeof(size_t)
	fmt::println( "sizeof(size_t): {}" , sizeof(size_t) );
    */

    // Scope of the iterator
    /*
	for(size_t i{0} ; i < 10 ; ++i){
		fmt::println( "{} : I love C++", i );
	}
	fmt::println( "Loop done!" );
	fmt::println( "i : {}", i ); //Compiler error : i is not in scope
    */

    // Iterator declared outside the loop
    /*
	size_t i{0}; // Iterator defined outside

	for(i ; i < 10 ; ++i){
		fmt::println( " {}: I love C++", i );
	}
	fmt::println( "Loop done!" );
	fmt::println( "i : {}",  i );
    */


    // Leave out the iterator declaration part
    /*
	size_t i{0}; // Iterator defined outside

	for(  ; i < 10 ; ++i){
		fmt::println( " {}: I love C++", i );
	}
	fmt::println( "Loop done!" );
	fmt::println( "i: {}",  i );
    */

    // Don't hard code values : BAD!
    /*
	constexpr size_t COUNT{100};

	for (size_t i{ 0 }; i < COUNT; ++i) {
         fmt::println(" {}: I love C++", i); 
    }
	fmt::println("Loop done!");
    */


    //Range based for loop
    //std::vector <int> values{ 1, 2, 3, 4, 55, 6, 7, 8, 9, 10, 11, 12 };// This is a collection of integers
	// The variable value will be assigned a value from the values array on each iteration
    /*
	for(size_t i {0} ; i < values.size() ; ++i){
		fmt::println( "value: {}" , values[i] );
	}
    */

    /*
    for(int value: values){
        fmt::println("value: {}", value);
    }
    */


    // Specify the collection in place
    /*
	for (int value : {1,2,3,4,5,6,7,8,9,10, 11}){
		//value holds a copy of the current iteration in the whole collection
		fmt::println( "value: {}" , value );
	}
    */

    // Auto type deduction
	for (auto value : { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) {
		// value holds a copy of the current iteration in the whole bag
		fmt::println(" value : {}", value);
	}
}


export void while_loop(){
    //While loops
    /*
    constexpr size_t COUNT {100};   // count stored in a variable
    size_t i{0}; // Iterator declaration

    while(i < COUNT){
        fmt::println("{}: I love C++", i);
        ++i;
    }
    fmt::println("Loop done");
    */


    //4. Do while loop
	constexpr int COUNT{ 0 };
	size_t i{0};// Iterator declaration

	do {
		fmt::println("{} : I love C++", i);
		++i;// Incrementation
	} while (i < COUNT);

	fmt::println("Loop done!");
}


export void infinite_loop(){
    //Infininte loops
    // Infinite loop : for loop
    /*
	for(size_t i{}; true ; ++i){
		fmt::println( "{}: I love C++", i);
	}
    */

    // Infinite loop : while loop
    /*
	size_t i{0};

	while(true){
	fmt::println( "{}: I love C++", i);
		++i;
	}
    */

    // Infinite loop : do while loop
    /*
	size_t i{ 0 };

	do {
		fmt::println("{} : I love C++", i);
		++i;
	} while (true);
    */
}

export void decrementing_loops(){
    //Decrementing loops
    /*
    constexpr size_t COUNT{5};

    for(size_t i{COUNT} ; i > 0; --i){
        fmt::println("i: {}", i);
    }
    */

    //Printing a vector
    // Initialize a vector with elements
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print the vector in reverse
    for (size_t i{numbers.size()}; i > 0; --i) {
        fmt::println("numbers[{}]: {}", i - 1, numbers[i - 1]);
    }
}


export void break_continue(){
    //Break and continue

    // break and continue : for loops
    /*
	constexpr size_t COUNT{20};

	for(size_t i{0} ; i < COUNT ; ++i ){

		if(i==5)
			continue;

		if(i == 11)
			break; // Breaks out of the loop
	fmt::println("i: {}", i );

	}
	fmt::println( "Loop done!");
    */
    
    // break and continue : while loop
    /*
	size_t i{0};
	while (i < 20){

		if(i==5){
			++i;
			continue;
		}
	    if(i==11)
		    break;

	    fmt::println("i : {}", i );
	    ++i;
	}
	fmt::println( "Loop done!");
    */


    // break and continue : do while loop
	size_t i{ 0 };

	do {
		if (i == 5) {
		    ++i;
		    continue;
		}

		if (i == 11){
            break;
        }

		fmt::println("i : {}", i);
		++i;

	} while (i < 20);
}