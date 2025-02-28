#pragma once

namespace it_1
{
    inline int maximum(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }

    inline int minimum(int a, int b) {
        if (a < b)
            return a;
        else
            return b;
    }
} // namespace it_1

namespace it_2
{
    int maximum(int a, int b);
    int minimum(int a, int b);
} // namespace it_2
