module;

#include <fmt/format.h>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <array>

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
                        std::cout << "A was pressed" << std::endl;
                        for (auto& shape : shapes) {
                            shape.setFillColor(sf::Color::Blue);
                        }
                    }
                    if(event.key.code == sf::Keyboard::B){
                        std::cout << "B was pressed" << std::endl;
                        for (auto& shape : shapes) {
                            shape.setFillColor(sf::Color::Yellow);
                        }

                    }
                    
                    //C and D will increase and decrease the radius of the circle
                    if(event.key.code == sf::Keyboard::C){
                        for (auto& shape : shapes) {
                            shape.setRadius(shape.getRadius() + 10.f);
                        }
                        std::cout << "C was pressed" << std::endl;

                    }
                    if(event.key.code == sf::Keyboard::D){
                        for (auto& shape : shapes) {
                            //Protect against negative radius
                            if(shape.getRadius() > 10.f)
                            {
                                shape.setRadius(shape.getRadius() - 10.f);
                            }
                        }

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

/*

    2. Track Key Press History with a Fixed-Size Container
        . Task: Track the last 5 keys pressed by the user and display the history in the console. 
            Use std::array<char, 5> to store the key history.
        . Hint: Use an index to cycle through the array and update it with the new key presses.
        . Objective: Practice with std::array for fixed-size containers and updating data circularly.

*/

namespace it_2{

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

        std::vector < sf::CircleShape> shapes;

        //Array to store the last 5 keys pressed
        std::array<char, 5> key_history {' ', ' ', ' ', ' ', ' '};
        size_t key_index {0};

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

                    //Store latest key pressed
                    char pressed_key {' '};

                    if(event.key.code == sf::Keyboard::A){
                        std::cout << "A was pressed" << std::endl;
                        pressed_key = 'A';
                        for (auto& shape : shapes) {
                            shape.setFillColor(sf::Color::Blue);
                        }
                    }
                    if(event.key.code == sf::Keyboard::B){
                        std::cout << "B was pressed" << std::endl;
                        pressed_key = 'B';
                        for (auto& shape : shapes) {
                            shape.setFillColor(sf::Color::Yellow);
                        }   

                    }
                    
                    //C and D will increase and decrease the radius of the circle
                    if(event.key.code == sf::Keyboard::C){
                        for (auto& shape : shapes) {
                            shape.setRadius(shape.getRadius() + 10.f);
                        }
                        std::cout << "C was pressed" << std::endl;
                        pressed_key = 'C';

                    }
                    if(event.key.code == sf::Keyboard::D){
                        for (auto& shape : shapes) {
                            //Protect against negative radius
                            if(shape.getRadius() > 10.f)
                            {
                                shape.setRadius(shape.getRadius() - 10.f);
                            }
                        }
                        pressed_key = 'D';


                    }
                    //Store the current key and print history
                    if( pressed_key != ' '){
                        /*
                        //This places the most recent key at the most current circular index. Not ideal
                        key_history[key_index] = pressed_key;
                        key_index = (key_index + 1) % key_history.size(); // Update the index circularly
                        */

                       //We want the most recent key to be at index 0
                       // Shift all the elements to the right
                       for(size_t i = key_history.size() - 1; i > 0; --i){
                            key_history[i] = key_history [i - 1];
                       }

                       //Store the most recent key at index 0
                       key_history[0] = pressed_key;
                    
                        //Print the last keys pressed
                        std::cout << "Key history: ";
                        for( char key: key_history){
                            std::cout << key << ' ';
                        }
                        std::cout << "\n";
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

}

/*
 3. Store Color Changes in a Static Array
                . Task: Store a predefined sequence of colors in a built-in array, and cycle through them 
                each time a specific key (e.g., space bar) is pressed to change the shape's fill color.
                . Hint: Use a built-in array like sf::Color colors[4] to store the color sequence and manage the index.
                . Objective: Get familiar with accessing data in built-in arrays and manipulating the shape’s color.
*/

namespace it_3{

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

        std::vector < sf::CircleShape> shapes;

        //Built-in array to store predefined colors
        sf::Color colors[4] {
            sf::Color::Cyan,
            sf::Color::Green,
            sf::Color::Blue,
            sf::Color::Yellow
        };

        //Index to keep track of the current color
        int color_index{0};


        for(size_t i{0}; i < 5; ++i){
            sf::CircleShape shape(circle_radius + i * 10); // Vary radius slightly for each shape
            shape.setFillColor(colors[color_index]);
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

                    if(event.key.code == sf::Keyboard::Space){
                        std::cout << "Space was pressed" << std::endl;
                        color_index = (color_index + 1) % std::size(colors);
                        for (auto& shape : shapes) {
                            shape.setFillColor(colors[color_index]);
                            std::cout << "current index: " << color_index << "\n";
                        }
                    }
                }
            }

            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0}; i < 5; ++i){
                window.draw(shapes[i]);
            }
            window.display();
        }

    }

}




