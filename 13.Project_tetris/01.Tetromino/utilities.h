#pragma once

#include <SFML/Graphics.hpp>
#include "board.h"
#include "tetromino.h"

void handleInput(sf::RenderWindow& window, Tetromino& tetromino) {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if (event.type == sf::Event::KeyPressed) {
            switch (event.key.code) {
                case sf::Keyboard::Left:
                    tetromino.move_left();
                    break;
                case sf::Keyboard::Right:
                    tetromino.move_right();
                    break;
                case sf::Keyboard::Down:
                    tetromino.move_down();
                    break;
                case sf::Keyboard::Up:
                    tetromino.rotate();
                    break;
            }
        }
    }
}

void app(){

    sf::RenderWindow window(sf::VideoMode(Board::WIDTH * Board::BLOCK_SIZE, 
                            Board::HEIGHT * Board::BLOCK_SIZE), 
                            "Tetris");
    Board board;
    BoardEntity entity(board);
    Tetromino tetromino(Tetromino::Type::L);

    board.initialize();

    while ((window.isOpen()))
    {
        handleInput(window, tetromino);
        board.update_tetromino(tetromino);

        window.clear();
        entity.draw(window);
        window.display();
    }
}
