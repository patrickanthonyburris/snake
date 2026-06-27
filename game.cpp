#include <iostream>
#include <string>
#include "game.hpp"

game::game(int height, int width) : 
	height(height),
	width(width),
	game_board(height, std::vector<space>(width)) {}

char game::get_move() {
	std::cout << "Which way move?\n";
	char move;
	std::cin >> move;
	return move;
}

void game::move_snake() {
	char move = get_move();
	if(move == 'w') {
		s.move_up();
	} else if(move == 's') {
		s.move_down();
	} else if(move == 'a') {
		s.move_left();
	} else if(move == 'd') {
		s.move_right();
	} else { 
		std::cout << "Invalid!\n";
	}
}

void game::display_game() {
	std::string row_border = "+";
	for(int i = 0; i < width; i++) {
		row_border += "--+";
	}
	
	for(int i = 0; i < height; i++) {
		std::cout << row_border << "\n|";
		for(int j = 0; j < width; j++) {
			if(s.get_row() == i && s.get_col() == j) {
				std::cout << "*";
			} else {
				std::cout << " ";
			}
			std::cout << " |";
		}
		std::cout << "\n";
	}
	std::cout << row_border << "\n";
}

void game::play_game() {
	for(int i = 0; i < 10; i++) {
	this->display_game();
	this->move_snake();
	}
}
