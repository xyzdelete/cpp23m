#include "board.h"

Board::Board() {
    grid.fill({});
}

void Board::initialize() {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            grid[y][x] = (x + y) % BLOCK_COLORS.size();
        }
    }
}

std::span<const std::array<int, Board::WIDTH>> Board::get_grid() const {
    return grid;
}
