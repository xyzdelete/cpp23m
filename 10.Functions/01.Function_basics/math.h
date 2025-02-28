#pragma once

namespace it_1
{
    inline int add(int a, int b){
        return a + b;
    }

    inline int inc_mult(int a, int b) {
        int result = ((++a) * (++b));
        return result;
    }
} // namespace it_1

namespace it_2
{
    int add(int a, int b);
    int inc_mult(int a, int b);
} // namespace it_2
