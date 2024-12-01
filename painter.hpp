#ifndef PAINTER_HPP
#define PAINTER_HPP

#include <SFML/Graphics.hpp>

class Painter {
public:
    Painter();
    void DrawSnake(const std::vector<sf::RectangleShape>& body);
    void DrawApple(const sf::RectangleShape& apple);
    void Clear();
    void Display();

private:
    sf::RenderWindow window;
};

#endif // PAINTER_HPP
