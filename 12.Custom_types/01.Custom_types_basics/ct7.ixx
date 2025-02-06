module;

#include <cstdint>
#include <fmt/format.h>

export module ct7;

namespace ct7
{

    export struct Position {
        unsigned int x;
        unsigned int y;
        Position(unsigned int px, unsigned int py) : x{px}, y{py} {}  // No default constructor
    };


    export class Pixel {
    public:
        Pixel(uint32_t color, const Position& pos, const uint32_t& ref_color);  // Custom constructor

        uint32_t get_color() const;
        void set_color(uint32_t color);

        unsigned int get_x() const;
        void set_x(unsigned int x);

        unsigned int get_y() const;
        void set_y(unsigned int y);

    private:
        const uint32_t m_const_color;        // 1. Const member
        const uint32_t& m_ref_color;         // 2. Reference member
        Position m_position;                 // 3. Object without default constructor
        uint32_t m_color{0xFF000000};
        unsigned int m_pos_x{0};
        unsigned int m_pos_y{0};
    };

    // Implementations
    Pixel::Pixel(uint32_t color, const Position& pos, const uint32_t& ref_color) 
        : m_const_color{color},
        m_ref_color{ref_color},
        m_position{pos.x, pos.y},
        m_color{color},
        m_pos_x{0},
        m_pos_y{0}
    {
        //This is going to give you problems
        /*
        m_const_color = color;
        m_ref_color = color;
        m_position = pos;
        */
       
        fmt::print(
            "Pixel created with color: 0x{:08X} at Position({}, {}) using a reference to 0x{:08X}\n", 
            color, 
            pos.x, 
            pos.y, 
            ref_color
        );
    }

        uint32_t Pixel::get_color() const {
        return m_color;
    }

    void Pixel::set_color(uint32_t color) {
        m_color = color;
    }

    unsigned int Pixel::get_x() const {
        return m_pos_x;
    }

    void Pixel::set_x(unsigned int x) {
        m_pos_x = x;
    }

    unsigned int Pixel::get_y() const {
        return m_pos_y;
    }

    void Pixel::set_y(unsigned int y) {
        m_pos_y = y;
    }

    
} // namespace ct7
