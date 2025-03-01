find_package(fmt CONFIG REQUIRED)
find_package(SFML COMPONENTS system window graphics audio CONFIG REQUIRED)

# Add all the header and source files
set(TETRIS_HEADERS
    utils/utilities.h
    board/board.h
    board/board_entity.h 
    pieces/tetromino.h 
    game/gamestate.h
    game/game.h
)

# Add the executable with the main source file
add_executable(${PROJECT_NAME} main.cpp ${TETRIS_HEADERS})

# Link with required libraries
target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt sfml-graphics)