#pragma once
#include <vector>
#include <fmt/format.h>

namespace recursion
{

    constexpr int fibonacci(int n){
        if ( n == 0 ) return 0;
        if ( n == 1 ) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    //Memoization
    int fibonacci_memo(int n) {
        static std::vector<int> memo(100, -1); // Initialize with -1 to indicate uncomputed values

        if (n == 0) return 0;
        if (n == 1) return 1;

        if (memo[n] != -1) return memo[n]; // Return memoized value if available

        memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2); // Compute and store the value
        return memo[n];
    }

    constexpr int fibonacci_iterative(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int prev = 0, curr = 1, next;
        for (int i = 2; i <= n; ++i) {
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;
    }
    
} // namespace recursion
