#pragma once

#include <fmt/format.h>

namespace overloading_1
{
    inline void print(int value){
        fmt::println("Integer: {}", value);
    }

    inline void print(int value1, int value2){
        fmt::println("Integer1: {}, Integer2: {} ", value1, value2);
    }

    inline void print(double value){
        fmt::println("Double: {}", value);
    }

    inline void print(const std::string& value){
        fmt::println("String: {}", value);
    }
    
} // namespace overloading_1
