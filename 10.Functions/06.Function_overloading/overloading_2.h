#pragma once

#include <fmt/format.h>

namespace overloading_2
{
    inline void process(int* array, size_t size) {
        fmt::println("Processing array of size {}", size);
    }

    inline void process(int value) {
        fmt::println("Processing single value: {}", value);
    }
    
} // namespace overloading_2
