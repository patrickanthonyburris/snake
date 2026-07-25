#ifndef GAME_HPP
#define GAME_HPP

#include "snake.hpp"

class game {
private:
	snake s; // snake object to control
public:
	void update(int* key_pressed);
	void display_game();
	void play_game();

};
#endif
