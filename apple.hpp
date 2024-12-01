#pragma once

#include "point.hpp"

// clasa Apple, care reprezinta un mar in joc
class Apple {
private:
    Point position; // pozitia marului

public:
    Apple(); // constructor implicit
    void SetPosition(const Point& pos); // seteaza pozitia marului
    Point GetPosition() const; // obtine pozitia marului
};
