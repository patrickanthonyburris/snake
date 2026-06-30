#include <iostream>
#include "game.hpp"
#include <ctime>

int main () {
	srand(time(nullptr));

	std::cout << "How big would you like your game board? Any input will make a square board.\n";
	int board_size = 0;
	std::cin >> board_size;
	game g(board_size,board_size);
	g.play_game(); 
	return 0;
}
