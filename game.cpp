#include <iostream>
#include <string>
#include "game.hpp"
#include "raylib.h"

game::game(int height, int width) : 
	height(height),
	width(width),
	game_board(height, std::vector<space>(width)) {
	
	place_apples();
	}

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

void game::place_apples() {
	for(int i = 0; i < this->height; i++) {
		int row = rand() % this->height;
		int col = rand() % this->width;

		space& sp = game_board.at(row).at(col);
		sp.set_apple();
	}
}

void game::display_game() {
	BeginDrawing();

	ClearBackground(BLACK);

	//draw snake

	//draw food

	EndDrawing();
}

void game::play_game() {
	InitWindow(750,750, "SNAKE");
	SetTargetFPS(60);
	while(!WindowShouldClose()) {
		this->display_game();
		//this->move_snake();
	}
	std::cout << "GAME OVER!";
	CloseWindow();
}
