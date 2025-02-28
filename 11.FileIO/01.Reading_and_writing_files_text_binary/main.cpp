/*
    . Reading and writing text files in modern C++.
        . Topics : 
            . Fundamental types: 
                . Reading and writing text files in modern C++
                . Reading and writing binary files in modern C++    

    . Changing from C++20 Modules to the header based compilation model. We: 
        1. Changed all `.ixx` files to `.h` header files with `#pragma once` include guards
        2. Removed module declarations and export keywords
        3. Changed `import` statements to `#include` directives
        4. Updated `main.cpp` to include the header files directly
        5. Created a simpler CMakeLists.txt without module-specific configurations
        6. Made the utilities namespace non-exported and updated function calls in main
*/

#include <filesystem>
#include <fstream>
#include <iostream>
#include <cstdio>
#include <iterator>
#include "utilities.h"

int main(){

    //Way #1
    /*
    std::filesystem::path file_path = R"(D:\sample_file.txt)"; // Windows
    //std::filesystem::path file_path = R"(/path/to/your/input_file.txt)"; // Linux

    std::string content = "\nHello, world! \nThis is a test.";

    std::ofstream file(R"(D:\sample_file.txt)", std::ios::out);

    file << content;

    file.close(); // Redundant
    */


    // Way #2
    /*
   	FILE* file = fopen(R"(D:\sample_file.txt)", "w");
	if (file) {
        std::string content = "Hello, world!";
        fprintf(file, "%s", content.c_str());
        fclose(file);
    } else {
        std::cerr << "Unable to open file";
    }
    */


    // Way #3
    /*
    std::ofstream file(R"(D:\sample_file.txt)");
    std::string content = "Hello, world!";
    std::copy(content.begin(), content.end(), std::ostream_iterator<char>(file));
    file.close();
    */

    //Going through proper functions
    //utilities::read_write_text_files();

    utilities::read_write_binary_files();
}