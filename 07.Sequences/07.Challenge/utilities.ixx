module;

#include <fmt/format.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

export module utilities; 

/*
    1. Store Multiple Shapes Using Containers
        . Task: Modify the code so that it stores multiple sf::CircleShape objects in an std::vector. 
            The program should initialize the shapes with different radii and positions, and cycle through their colors.
        .  Hint: Use std::vector<sf::CircleShape> to store the shapes.
        .  Objective: Students should get used to working with dynamic containers like std::vector.
*/

namespace it_1{

    export void app(){

        //Store data in pre-defined variable
        constexpr int width {200};
        constexpr int height {200};
        constexpr float circle_radius {10.f};
        constexpr float clock_period{.02f};
        const std::string title {"SFML works!"};
        sf::Color shape_color{sf::Color::Green};
        sf::Color background_color{sf::Color::Red};


        sf::RenderWindow window(sf::VideoMode(width, height), title);

        // sf::CircleShape shape(circle_radius);
        // shape.setFillColor(shape_color);
        //Create multiple shapes and store them in a vector
        std::vector < sf::CircleShape> shapes;

        for(size_t i{0}; i < 5; ++i){
            sf::CircleShape shape(circle_radius + i * 10); // Vary radius slightly for each shape
            shape.setFillColor(shape_color);
            shape.setPosition(i * 20.f, 50.f); // Set the position of each shape.
            shapes.push_back(shape);
        }

        while (window.isOpen())
        {


            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed){
                    window.close();
                }

                //Key Events
                if(event.type == sf::Event::KeyPressed){
                    if(event.key.code == sf::Keyboard::Escape){
                        window.close();
                    }

                    if(event.key.code == sf::Keyboard::A){

                    }
                    if(event.key.code == sf::Keyboard::B){

                    }
                    
                    //C and D will increase and decrease the radius of the circle
                    if(event.key.code == sf::Keyboard::C){

                    }
                    if(event.key.code == sf::Keyboard::D){

                    }
                }

                //Mouse Events
            }

            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0}; i < 5; ++i){
                window.draw(shapes[i]);
            }
            window.display();
        }

    }

} // namespace it_1




