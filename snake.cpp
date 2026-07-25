#include "snake.hpp"

int snake::get_y() {
	return this->y;
}

int snake::get_x() {
	return this->x;
}

void snake::move_up() {
	this->y--;
}

void snake::move_down() {
	this->x--;
}

void snake::move_right() {
	this->x++;
}

void snake::move_left() {
	this->y++;
}

void snake::create_body_segment(int* key_pressed) {
	if(!this->next) {
		this->next = &body;
	}
	this->tail = &body;
}

void snake::draw_snake() {
	DrawRectangle(this->x, this->y, 50, 50, GREEN);
	while(this->next) {
		DrawRectangle(this->next->get_x(), this->next->get_y(), 50, 50, GREEN);
			
	}
}
