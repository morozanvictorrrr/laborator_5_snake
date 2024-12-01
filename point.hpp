#pragma once

// clasa Point, care reprezinta un punct pe tabla
class Point {
public:
    int x, y;
    
    Point(int x, int y) : x(x), y(y) {}

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};
