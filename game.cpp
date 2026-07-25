#include <iostream>
#include <string>
#include "game.hpp"
#include "raylib.h"

void game::update(int* key_pressed) {
	if(IsKeyPressed(KEY_W) || *key_pressed == KEY_W) {
		s.move_up();
		*key_pressed = KEY_W;
	}
	if(IsKeyPressed(KEY_A) || *key_pressed == KEY_A) {
		s.move_down();
		*key_pressed = KEY_A;
	}
	if(IsKeyPressed(KEY_S) || *key_pressed == KEY_S) {
		s.move_left();
		*key_pressed = KEY_S;
	}
	if(IsKeyPressed(KEY_D) || *key_pressed == KEY_D) {
		s.move_right();
		*key_pressed = KEY_D;
	}
}
void game::display_game() {
	BeginDrawing();

	ClearBackground(BLACK);

	//draw snake
	//DrawRectangle(s.get_x(), s.get_y(), 50, 50, GREEN);
	s.draw_snake();

	//draw food

	EndDrawing();
}

void game::play_game() {
	InitWindow(640,480, "SNAKE");
	SetTargetFPS(60);
	int key_pressed = 0;
	while(!WindowShouldClose()) {
		this->update(&key_pressed);
		this->display_game();
	}
	std::cout << "GAME OVER!";
	CloseWindow();
}
