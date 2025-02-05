module;

#include <fmt/format.h>
#include <memory>

export module utilities; 

import ct1;
import ct2;
import ct3;
import ct4;

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