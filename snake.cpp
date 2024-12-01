#include "snake.hpp"

Snake::Snake() {
    // initializare cu un sarpe de lungime 1, pe pozitia (5, 5)
    body.push_back(Point(5, 5));
}

void Snake::Move(Direction dir) {
    Point head = body.front();
    switch (dir) {
        case Direction::Top:
            head.y -= 1;
            break;
        case Direction::Left:
            head.x -= 1;
            break;
        case Direction::Right:
            head.x += 1;
            break;
        case Direction::Bottom:
            head.y += 1;
            break;
    }
    body.insert(body.begin(), head); // adauga capul in fata corpului
    body.pop_back(); // elimina ultima parte a corpului
}

void Snake::Grow() {
    body.push_back(body.back()); // creste corpul
}

const std::vector<Point>& Snake::GetBody() const {
    return body;
}

bool Snake::CheckCollision(const Board& board) const {
    // verifica coliziunea cu peretii jocului
    const Point& head = body.front();
    if (head.x < 0 || head.x >= board.GetWidth() || head.y < 0 || head.y >= board.GetHeight()) {
        return true;
    }
    // verifica coliziunea cu corpul sarpelui
    for (size_t i = 1; i < body.size(); ++i) {
        if (body[i] == head) {
            return true;
        }
    }
    return false;
}
