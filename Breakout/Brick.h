#pragma once
#include <SFML/Graphics.hpp>

class Brick {
public:
    Brick(float x, float y, float width, float height);
    void render(sf::RenderWindow& window);
    void update(float dt);
    sf::FloatRect getBounds() const;

    sf::Vector2f getMiddle();

    float _bulletCooldown = 0.0f;

private:
    sf::RectangleShape _shape;
    bool _isDestroyed;
};