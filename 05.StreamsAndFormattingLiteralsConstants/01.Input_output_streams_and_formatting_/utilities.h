#pragma once

#include <iostream>
#include <iomanip>
#include <ios>
#include <string>

void input_output_iostream(){
    //Data output
    std::cout << "Hello modern C++" << std::endl;
    std::cout << "How are you?" << std::endl;
    std::cout << "I am fine";

    //Data input
    unsigned  age1{};
    std::string name{};
    std::cout << "Please state your name and age:" << std::endl;
    //std::cin >> name;
    //std::cin >> age1;
    //std::cin >> name >> age1;
    std::getline(std::cin, name);
    std::cin >> age1;
    std::cout << "Hello " << name << ". You are " << age1 << " years old!" << std::endl; 


    //Data formating with std::endl and "\n"
    //Output formatting
	// std::endl : places a new line character on the output stream.
  	//        This is identical to placing '\n' on the output stream.
  	std::cout << "Hello";
  	std::cout << "World";

  	std::cout << std::endl;

  	std::cout << "-------------" << std::endl;

  	std::cout << "Hello" << std::endl;
  	std::cout << "World" << std::endl;

  	std::cout << std::endl;

  	std::cout << "Hello\n";
  	std::cout << "World\n";

}

void output_formatting(){
    // std::setw() : Adjusts the field with for the item about to be printed.
  	// The setw() manipulator only affects the next value to be printed.
    /*
  	std::cout << "Unformatted table : " << std::endl;
  	std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
  	std::cout << "Stanley" << " " << "Woods" << " 33" << std::endl;
  	std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
  	std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
  	std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
  	std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;


    std::cout << std::endl;
  	std::cout << "Formatted table : " << std::endl;
  	std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
  	std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
  	std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
  	std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
  	std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
  	std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
  	std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    */

   /**
  	std::cout << "Formatted table with variables: " << std::endl;
  	int col_width{ 14 };

  	std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width / 2)
            	<< "Age" << std::endl;
  	std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << "Gray" << std::setw(col_width / 2) << "25"
            	<< std::endl;
  	std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << "Woods" << std::setw(col_width / 2) << "33"
            	<< std::endl;
  	std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << "Parker" << std::setw(col_width / 2) << "45"
            	<< std::endl;
  	std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width / 2) << "21"
            	<< std::endl;
  	std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width / 2) << "27"
            	<< std::endl;
  	std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width / 2)
            	<< "29" << std::endl;
    */

    // ...existing code...

  	//===================================================================

    // showpoint and noshowpoint : show trailing zeros if necessary
  	// Force output of the decimal point

  	double d{ 34.1 };
  	double e{ 101.99 };
  	double f{ 12.0 };
  	int g{ 45 };

  	std::cout << std::endl;
  	std::cout << "noshowpoint (default) : " << std::endl;
  	std::cout << "d : " << d << std::endl;
  	std::cout << "e : " << e << std::endl;
  	std::cout << "f : " << f << std::endl;// 12
  	std::cout << "g : " << g << std::endl;

  	std::cout << std::endl;
  	std::cout << "showpoint: " << std::endl;
  	std::cout << std::showpoint;
  	std::cout << "d : " << d << std::endl;
  	std::cout << "e : " << e << std::endl;
  	std::cout << "f : " << f << std::endl;// 12.0
  	std::cout << "g : " << g << std::endl;
}
