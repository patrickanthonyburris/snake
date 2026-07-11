#include <iostream>
#include "game.hpp"
#include <ctime>
#include "raylib.h"

int main () {
	srand(time(nullptr));

	game g(5, 5);
	g.play_game(); 
	return 0;
}
