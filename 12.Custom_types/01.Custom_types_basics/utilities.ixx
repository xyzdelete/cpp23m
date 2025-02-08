module;

#include <fmt/format.h>
#include <memory>
#include <vector>

export module utilities; 

import ct1;
import ct2;
import ct3;
import ct4;
import ct5;
import ct6;
import ct7;
import ct8;
import ct9;
import ct10;
import ct11;

export void ct1_demo(){
    /*
		. {:#010x} is a format specifier that will print the hex value with 10 digits and 0 padding.
		. #  indicates that the output should include the 0x prefix for hexadecimal numbers.
		. 010 indicates that the output should be 10 characters wide and zero-padded.
		. x indicates that the number should be printed in lowercase hexadecimal.	
	*/

    ct1::Pixel p;


    //Modify the data inside of the class object
    p.m_color = 0x00FF00FF;
    p.m_pos_x = 100;
    p.m_pos_y = 200;

    fmt::println("Pixel color: {:#010x}", p.m_color);
    fmt::println("Pixel position: ({}, {})", p.m_pos_x, p.m_pos_y);

}


export void ct2_demo(){

    ct2::Pixel p;
    //ct2::Pixel p{0xff00ff, 100, 200};

    //Modify the data inside of the class objext
    p.set_color(0x00FF00FF);
    p.set_x(100);
    p.set_y(200);

    fmt::println("Pixel color: {:#010x}", p.get_color());
    fmt::println("Pixel position: ({}, {})", p.get_x(), p.get_y());


    //Create objects on the heap with raw pointers
	ct2::Pixel* p1 = new ct2::Pixel{0x00FF00FF, 10, 20};
	fmt::println("Pixel color: {:#010x}", p1->get_color());
	fmt::println("Pixel position: ({}, {})", p1->get_x(), p1->get_y());
	delete p1;


    //Create objects on the heap with smart pointers
	auto p2 = std::make_unique<ct2::Pixel>(0x00FF00FF, 10, 20);
	fmt::println("Pixel color: {:#010x}", p2->get_color());
	fmt::println("Pixel position: ({}, {})", p2->get_x(), p2->get_y());

}

export void ct3_demo(){

    ct3::Pixel p;
    //ct2::Pixel p{0xff00ff, 100, 200};

    //Modify the data inside of the class objext
    p.set_color(0x00FF00FF);
    p.set_x(100);
    p.set_y(200);

    fmt::println("Pixel color: {:#010x}", p.get_color());
    fmt::println("Pixel position: ({}, {})", p.get_x(), p.get_y());


    //Create objects on the heap with raw pointers
	ct3::Pixel* p1 = new ct3::Pixel{0x00FF00FF, 10, 20};
	fmt::println("Pixel color: {:#010x}", p1->get_color());
	fmt::println("Pixel position: ({}, {})", p1->get_x(), p1->get_y());
	delete p1;


    //Create objects on the heap with smart pointers
	auto p2 = std::make_unique<ct3::Pixel>(0x00FF00FF, 10, 20);
	fmt::println("Pixel color: {:#010x}", p2->get_color());
	fmt::println("Pixel position: ({}, {})", p2->get_x(), p2->get_y());

}

export void ct4_demo(){

    ct4::Pixel p;
    //ct2::Pixel p{0xff00ff, 100, 200};

    //Modify the data inside of the class objext
    p.set_color(0x00FF00FF);
    p.set_x(100);
    p.set_y(200);

    fmt::println("Pixel color: {:#010x}", p.get_color());
    fmt::println("Pixel position: ({}, {})", p.get_x(), p.get_y());


    //Create objects on the heap with raw pointers
	ct4::Pixel* p1 = new ct4::Pixel{0x00FF00FF, 10, 20};
	fmt::println("Pixel color: {:#010x}", p1->get_color());
	fmt::println("Pixel position: ({}, {})", p1->get_x(), p1->get_y());
	delete p1;


    //Create objects on the heap with smart pointers
	auto p2 = std::make_unique<ct4::Pixel>(0x00FF00FF, 10, 20);
	fmt::println("Pixel color: {:#010x}", p2->get_color());
	fmt::println("Pixel position: ({}, {})", p2->get_x(), p2->get_y());

}


export void ct5_demo(){
    /*
    ct5::Pixel p;

	//Change the data inside the Pixel object
	p.set_color(0x00FF00FF);
	p.set_x(10);
	p.set_y(20);

	fmt::println("Pixel color: {:#010x}", p.get_color());
	fmt::println("Pixel position: ({}, {})", p.get_x(), p.get_y());

    //Recursive lambdawith explicit object parameters
    auto fib = [] (this auto& self, int n){
        if(n <= 1) return n;
        return self(n - 1) + self(n - 2);
    };

    fmt::println("Fibonacci(10): {}", fib(10));
    */

}


export void ct6_demo(){
 	//Use the default constructor
	ct6::Pixel p;

	//Constructor a ct6::Pixel passing in values at construction
	//ct6::Pixel p(0x00FFFFFF, 100, 200);

	fmt::println("Pixel color: {:#010x}", p.get_color());
	fmt::println("Pixel position: ({}, {})", p.get_x(), p.get_y());

	//Create objects on the heap with raw pointers
	ct6::Pixel* p1 = new ct6::Pixel(0x00FF00FF, 10, 20);
	fmt::println("Pixel color: {:#010x}", p1->get_color());
	fmt::println("Pixel position: ({}, {})", p1->get_x(), p1->get_y());
	delete p1;

	//Create objects on the heap with smart pointers
	auto p2 = std::make_unique<ct6::Pixel>(0x00FF00FF, 10, 20);
	fmt::println("Pixel color: {:#010x}", p2->get_color());
	fmt::println("Pixel position: ({}, {})", p2->get_x(), p2->get_y());   
}


export void ct7_demo(){

    ct7::Pixel p(0x00FF00FF, ct7::Position{10,20}, 0x00FF00FF);

	//Change the data inside the Pixel object
	p.set_color(0x00FF00FF);
	p.set_x(10);
	p.set_y(20);

}


export void ct8_demo(){

	ct8::Pixel p1(0x00FF00FF, 10, 20);
	ct8::Pixel p2 = p1;	//This how we create a copy.

	fmt::println("Pixel 1 color: {:#010x}", p1.get_color());
	fmt::println("Pixel 1 position: ({}, {})", p1.get_x(), p1.get_y());
	fmt::println("Pixel 2 color: {:#010x}", p2.get_color());
	fmt::println("Pixel 2 position: ({}, {})", p2.get_x(), p2.get_y());
	fmt::println("Address of p1: {}", fmt::ptr(&p1));
	fmt::println("Address of p2: {}", fmt::ptr(&p2));

}

// Example function that takes a Pixel by value
void process_pixel(ct9::Pixel p) {
    fmt::print("Processing pixel: color={}, pos=({}, {})\n", p.get_color(), p.get_x(), p.get_y());
}

// Example function that returns a Pixel by value
ct9::Pixel create_pixel() {
    ct9::Pixel p{0xFF0000, 30, 40};
    return p;  // Copy constructor may be invoked here (but likely optimized out)
}

export void ct9_demo(){

 	/*
	ct9::Pixel p1(0x00FF00FF, 10, 20);
	ct9::Pixel p2 = p1; //Deep copy

	fmt::println("Pixel 1 color: {:#010x}", p1.get_color());
	fmt::println("Pixel 1 position: ({}, {})", p1.get_x(), p1.get_y());
	fmt::println("Pixel 2 color: {:#010x}", p2.get_color());
	fmt::println("Pixel 2 position: ({}, {})", p2.get_x(), p2.get_y());

	p1.set_x(100);
	p1.set_y(200);

	fmt::println("After changing the position of Pixel 1");
	fmt::println("Pixel 1 color: {:#010x}", p1.get_color());
	fmt::println("Pixel 1 position: ({}, {})", p1.get_x(), p1.get_y());
	fmt::println("Pixel 2 color: {:#010x}", p2.get_color());
	fmt::println("Pixel 2 position: ({}, {})", p2.get_x(), p2.get_y());
	*/


	//Cases where the copy constructor is called
	// 1. Copy initialization
    ct9::Pixel p1{0xFFFFFF, 10, 20};
    //ct9::Pixel p2 = p1;  // Copy constructor is called

    // 2. Passing by value
    //process_pixel(p1);  // Copy constructor is called to pass p1 to the function

	// 3. Returning by value: This may not always call the copy constructor due to RVO (Return Value Optimization)
    //ct9::Pixel p3 = create_pixel();  // Copy constructor may be called (or elided)

	// 5. Copying an object in a collection (vector)
	/*
    std::vector<ct9::Pixel> pixels;
    pixels.push_back(p1);  // Copy constructor is called when adding to the vector
	pixels.push_back(p1);
	*/

    // 6. Explicit copy constructor
    ct9::Pixel p5(p1);  // Copy constructor is explicitly called

}


export void ct10_demo(){
	//ct10::Pixel p1;                    // Uses default constructor
	//ct10::Pixel p2{0xFFFF0000};         // Uses color-only constructor, which delegates to the three-argument constructor
	ct10::Pixel p3{0xFF00FF00, 100, 50}; // Directly uses the three-argument constructor
	ct10::Pixel p4{p3};                 // Uses copy constructor with delegation
}


export void ct11_demo(){
	uint32_t color = 0xFF00FF00;
	ct11::Pixel p(color);
	ct11::print_pixel(p);

	ct11::Pixel p1{0xFF00FF00, 100, 50}; // Directly uses the three-argument constructor
	ct11::print_pixel(p1);
}