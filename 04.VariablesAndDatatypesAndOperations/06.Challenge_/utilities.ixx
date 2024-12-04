module;

#include <SFML/Graphics.hpp> // Global module fragment

export module utilities; 

export void app(){

    //Store data in pre-defined variable
    int width {200};
    int height {200};
    float circle_radius {100.f};
    std::string title {"SFML works!"};
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
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(background_color);
        window.draw(shape);
        window.display();
    }

}
