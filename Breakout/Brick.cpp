#include "Brick.h"

Brick::Brick(float x, float y, float width, float height)
    : _isDestroyed(false)
{
    _shape.setPosition(x, y);
    _shape.setSize(sf::Vector2f(width, height));
    _shape.setFillColor(sf::Color::Red);
    _bulletCooldown = rand() % 5 + 0.5;
}

void Brick::render(sf::RenderWindow& window)
{
    if (!_isDestroyed) {
        window.draw(_shape);
    }
}

void Brick::update(float dt)
{
    if (_bulletCooldown > 0) 
    {
        _bulletCooldown -= dt;
    }
}


sf::FloatRect Brick::getBounds() const
{
    return _shape.getGlobalBounds();
}

sf::Vector2f Brick::getMiddle()
{
    sf::FloatRect bounds = _shape.getGlobalBounds();
    return sf::Vector2f(bounds.left + bounds.width / 2, bounds.top + bounds.height / 2);
}