#include "game.hpp"
#include "snake.hpp"

Game::Game(const Board& b) : board(b), score(0) {}

void Game::Start(Painter& painter) {
    while (true) {
        HandleInput();
        Update(painter);
        Draw(painter);
    }
}

void Game::Update(Painter& painter) {
    snake.Move(Direction::Right); // Exemplu de miscare
    CheckCollision();
}

void Game::Draw(Painter& painter) {
    std::vector<std::vector<char>> image;
    // construieste imaginea pentru sarpe
    for (int i = 0; i < board.GetHeight(); ++i) {
        std::vector<char> row(board.GetWidth(), '.');
        image.push_back(row);
    }

    for (const auto& point : snake.GetBody()) {
        image[point.y][point.x] = 'X';
    }

    painter.DrawImage(Point(0, 0), Point(board.GetWidth(), board.GetHeight()), image);
}

void Game::HandleInput() {
    // cod pentru preluarea input-ului utilizatorului
}

void Game::CheckCollision() {
    // verifica coliziunile
}
