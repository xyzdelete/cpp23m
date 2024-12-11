module;

#include <SFML/Graphics.hpp> // Global module fragment
#include <iostream>

export module utilities; 

export void app(){

    //Store data in pre-defined variable
    constexpr int width {200};
    constexpr int height {200};
    constexpr float circle_radius {100.f};
    const std::string title {"SFML works!"};
    sf::Color shape_color{sf::Color::Green};
    sf::Color background_color{sf::Color::Red};


	sf::RenderWindow window(sf::VideoMode(width, height), title);
    sf::CircleShape shape(circle_radius);
    shape.setFillColor(shape_color);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
            }

            if(event.type == sf::Event::KeyPressed){
                if(event.key.code == sf::Keyboard::Escape){
                    window.close();
                }

                if(event.key.code == sf::Keyboard::A){
                    //std::cout << "Pressed on A\n";
                    shape.setFillColor(sf::Color::Blue);
                }
                if(event.key.code == sf::Keyboard::B){
                    //std::cout << "Pressed on B\n";
                    shape.setFillColor(sf::Color::Yellow);
                }
            }
            
        }

        window.clear(background_color);
        window.draw(shape);
        window.display();
    }

}
