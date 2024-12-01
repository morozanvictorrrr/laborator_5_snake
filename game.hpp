#ifndef GAME_HPP
#define GAME_HPP

#include "painter.hpp"  // Asigură-te că Painter este inclus

class Game {
public:
    void Start(Painter& painter);
    void Update(Painter& painter);
    void Draw(Painter& painter);
    // alte metode
};

#endif // GAME_HPP
