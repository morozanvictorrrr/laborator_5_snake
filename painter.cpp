#include "painter.hpp"

// metoda pentru desenarea imaginii pe ecran
void Painter::DrawImage(const Point& topLeft, const Point& bottomRight, const std::vector<std::vector<char>>& image) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Game");
    window.clear();
    
    // exemplu simplu pentru desenarea unei imagini
    for (int i = 0; i < image.size(); ++i) {
        for (int j = 0; j < image[i].size(); ++j) {
            if (image[i][j] == 'X') {
                sf::RectangleShape rectangle(sf::Vector2f(10, 10));
                rectangle.setPosition(topLeft.x + j * 10, topLeft.y + i * 10);
                rectangle.setFillColor(sf::Color::Red);
                window.draw(rectangle);
            }
        }
    }

    window.display();
}

// metoda pentru a scrie text pe ecran
void Painter::WriteText(const Point& position, const std::string& text) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Game");
    window.clear();

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        throw std::runtime_error("Font not found");
    }

    sf::Text sfText;
    sfText.setFont(font);
    sfText.setString(text);
    sfText.setCharacterSize(24);
    sfText.setFillColor(sf::Color::White);
    sfText.setPosition(position.x, position.y);

    window.draw(sfText);
    window.display();
}
