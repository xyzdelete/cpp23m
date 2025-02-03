module;

#include <fmt/format.h>

export module utilities; 

import ct1;

export void ct1_demo(){
     /*
		. {:#010x} is a format specifier that will print the hex value with 10 digits and 0 padding.
		. #  indicates that the output should include the 0x prefix for hexadecimal numbers.
		. 010 indicates that the output should be 10 characters wide and zero-padded.
		. x indicates that the number should be printed in lowercase hexadecimal.	
	*/

    //Create the object
    ct1::Pixel p;

    //Change the data inside the pixel object
    p.m_color = 0x00FF00FF;
    p.pos_x = 10;
    p.pos_y = 20;

    fmt::println("Pixel color: {:#010x}", p.m_color);
	fmt::println("Pixel position: ({}, {})", p.pos_x, p.pos_y);   
}