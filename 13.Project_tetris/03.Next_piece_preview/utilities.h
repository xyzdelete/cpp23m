#pragma once

#include <SFML/Graphics.hpp>
#include <random>
#include "board.h"
#include "tetromino.h"

Tetromino spawn_new_tetromino();
void draw_next_piece(sf::RenderWindow& window, const Tetromino& next_piece);
void app();
