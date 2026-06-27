#ifndef GAME_HPP
#define GAME_HPP

#include <vector>

#include "snake.hpp"
#include "space.hpp"

class game {
private:
	std::vector<std::vector<space>> game_board; // 2D vector for game board
	snake s; // snake object to control
	int height;
	int width;

public:
	game(int height, int width);
	char get_move();
	void move_snake();
	void display_game();
	void play_game();

};
#endif
