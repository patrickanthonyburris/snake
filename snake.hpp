#ifndef SNAKE_HPP
#define SNAKE_HPP

#include "body.hpp"

class snake {
private:
	int x = 40;
	int y = 40;
	body* next = nullptr;
public:
	int get_y();
	int get_x();
	void create_body_segment();
	void move_up();
	void move_down();
	void move_right();
	void move_left();
	void s.draw_snake();
};

#endif
