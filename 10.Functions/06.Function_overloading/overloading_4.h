#pragma once

#include <fmt/format.h>
#include <random>
#include <numbers>

namespace overloading_4
{
    inline std::mt19937 rng(std::random_device{}());

    // Roll a 6-sided die
    inline int roll() {
        std::uniform_int_distribution<int> dist(1, 6);
        return dist(rng);
    }

    // Roll an n-sided die
    inline int roll(int sides) {
        std::uniform_int_distribution<int> dist(1, sides);
        return dist(rng);
    } 

    // Roll multiple dice
    inline int roll(int sides, int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += roll(sides);
        }
        return total;
    }

    //Area computation
    // Area of a square
    inline double area(double side) {
        return side * side;
    }

    // Area of a rectangle
    inline double area(double length, double width) {
        return length * width;
    }

    // Area of a circle
    inline double area(double radius, bool is_circle) {
        return is_circle ? std::numbers::pi * radius * radius : 0.0;
    }

    //Chat bot
    // Default response
    inline void respond() {
        fmt::print("I'm here to help! What do you need?\n");
    }

    // Response to a question
    inline void respond(const std::string& question) {
        fmt::print("You asked: {}\nLet me think about that...\n", question);
    }

    // Response to a specific keyword
    inline void respond(const std::string& keyword, bool special) {
        if (special) {
            fmt::print("Ah, {}! That's one of my favorite topics!\n", keyword);
        }
    }
    
} // namespace overloading_4
