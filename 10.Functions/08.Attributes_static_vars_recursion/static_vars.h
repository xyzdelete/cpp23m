#pragma once

#include <fmt/format.h>

namespace static_vars
{
    //Static variables in functions: This allows us to keep track of the number of times a function has been called.

    void user_login(){
        static size_t login_count {0};
        ++login_count;
        fmt::println("Welcome back! This is your login attempt number: {}", login_count);
    }

} // namespace static_vars
