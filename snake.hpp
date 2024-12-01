#pragma once

#include "point.hpp"
#include <vector>

enum class Direction {
    Top,
    Bottom,
    Left,
    Right
};

// clasa Snake, care reprezinta sarpele din joc
class Snake {
private:
    std::vector<Point> body; // Corpul sarpelui

public:
    Snake(); // constructor implicit
    void Move(Direction dir); // misca sarpele intro-o directie
    void Grow(); // adauga o noua parte la corpul sarpelui
    const std::vector<Point>& GetBody() const; // obtine corpul sarpelui
    bool CheckCollision(const Board& board) const; // verifica coliziunea cu peretii sau cu el însuși
};
