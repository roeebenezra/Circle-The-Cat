#pragma once
#include "Board.hpp"
#include "Bfs.hpp"

struct NextMove{
    size_t _row = 0, _col = 0;
};

class Cat
{
public:
	explicit Cat(Board&);
    ~Cat() = default;
	void showCat(RenderWindow& window) const { window.draw(m_catSprite); }
	void setCatPosition(NextMove&);

private:
	Sprite m_catSprite;
	Board m_board;
};