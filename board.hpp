#pragma once

#include "point.hpp"

// clasa Board, care reprezinta tabla de joc
class Board {
private:
    int width, height; // dimensiunile tabelei

public:
    Board(int w, int h); // constructor
    int GetWidth() const; // obtine latimea
    int GetHeight() const; // otine inaltimea
};
