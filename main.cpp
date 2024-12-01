#include <iostream>
#include <vector>
#include <memory>
#include "snake.hpp"
#include "apple.hpp"
#include "board.hpp"
#include "painter.hpp"
#include "game.hpp"

// functia principala care ruleaza jocul
int main() {
    // pornim tabla de joc
    Board gameBoard(20, 20);
    Game game(gameBoard);

    // creaz un obiect Painter pentru desenare
    Painter painter;

    // incep jocul
    game.Start(painter);

    return 0;
}
