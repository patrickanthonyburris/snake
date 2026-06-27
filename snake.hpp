#ifndef SNAKE_HPP
#define SNAKE_HPP

class snake {
private:
	int row = 3;
	int col = 3;
public:
	int get_row();
	int get_col();
	void move_up();
	void move_down();
	void move_right();
	void move_left();
};

#endif
