#pragma once

#include <fmt/format.h>
#include <iostream> // for std::cout

void standard_format_facilities(){
    //This may not work on your compiler but it works on latest visual c++
    //C++ 23 adds std::print and std::println, but they only work well on Visual C++.
    //We'll stick to fmt going forward.
    /*
    auto value = std::format("Hello {}", " World!");
    std::cout << value << "\n";

    std::print("Hello, {}", "world\n");
    std::print("Hello, {}!", "world\n");
    std::println("Unformatted table : ");
    std::println("{} {} {}", "Daniel", "Gray", "25");
    std::println("{} {} {}", "Stanley", "Woods", "33");
    std::println("{} {} {}", "Jordan", "Parker", "45");
    std::println("{} {} {}", "Joe", "Ball", "21");
    std::println("{} {} {}", "Josh", "Carr", "27");
    std::println("{} {} {}", "Izaiah", "Robinson", "29");
    
    std::println("-----");

    std::println("Formatted table : ");
    std::println("{:<10} {:<10} {:<5}", "Lastname", "Firstname", "Age");
    std::println("{:<10} {:<10} {:<5}", "Daniel", "Gray", "25");
    std::println("{:<10} {:<10} {:<5}", "Stanley", "Woods", "33");
    std::println("{:<10} {:<10} {:<5}", "Jordan", "Parker", "45");
    std::println("{:<10} {:<10} {:<5}", "Joe", "Ball", "21");
    std::println("{:<10} {:<10} {:<5}", "Josh", "Carr", "27");
    std::println("{:<10} {:<10} {:<5}", "Izaiah", "Robinson", "29");
    */
}


void external_format_facilities(){
    //Using the external format library
    auto value = fmt::format("Hello, {}!", "world");
  	std::cout << value << "\n";
  	fmt::print("Hello, {}!", "world\n");
  	fmt::println("Unformatted table : ");
  	fmt::println("{} {} {}", "Daniel", "Gray", "25");
  	fmt::println("{} {} {}", "Stanley", "Woods", "33");
  	fmt::println("{} {} {}", "Jordan", "Parker", "45");
  	fmt::println("{} {} {}", "Joe", "Ball", "21");
  	fmt::println("{} {} {}", "Josh", "Carr", "27");
  	fmt::println("{} {} {}", "Izaiah", "Robinson", "29");

  	fmt::println("-----");

  	// ... existing code ...
}
