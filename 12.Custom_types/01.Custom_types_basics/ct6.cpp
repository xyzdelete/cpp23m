#include "ct6.h"
#include <fmt/format.h>

namespace ct6
{
    // Implementations
    Pixel::Pixel() {    //No need to ctor initializer list here. The in-class initializers are used.
        fmt::print("Pixel created\n");
    }

    Pixel::Pixel(uint32_t color, unsigned int x, unsigned int y)
        : m_color{color}, 
        m_pos_x{x}, 
        m_pos_y{y} 
    {
        fmt::print("Pixel created\n");
    }

    Pixel::~Pixel(){
        fmt::print("Pixel destroyed\n");
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
} // namespace ct6
