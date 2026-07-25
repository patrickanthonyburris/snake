#include <iostream>
#include "game.hpp"
#include <ctime>
#include "raylib.h"

int main () {
	srand(time(nullptr));

	game g;
	g.play_game(); 
	return 0;
}
