#include "apple.hpp"

Apple::Apple() : position(0, 0) {}

void Apple::SetPosition(const Point& pos) {
    position = pos;
}

Point Apple::GetPosition() const {
    return position;
}
