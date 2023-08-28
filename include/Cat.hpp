#pragma once


struct NextMove{
    unsigned _row = 0, _col = 0;
};

#include "Board.hpp"
#include "MoveObject.hpp"
#include "macros.hpp"
#include <SFML/Graphics.hpp>

class Cat  : public MoveObject {

public:
    explicit Cat(Board &);
    void showCat(sf::RenderWindow &window) const { window.draw(m_catSprite); }
    void move();
    sf::Vector2i getCatCoordinates()const { return m_place; }
    bool checkCatWon() const;

private:
    void setCatPosition(const sf::Vector2i &);
    Sprite m_catSprite;
    Board *m_board;
    sf::Vector2i m_place;
    bool m_catWon;
};
