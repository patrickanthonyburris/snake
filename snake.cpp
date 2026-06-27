#include "snake.hpp"

int snake::get_row() {
	return this->row;
}

int snake::get_col() {
	return this->col;
}

void snake::move_up() {
	this->row--;
}

void snake::move_down() {
	this->row++;
}

void snake::move_right() {
	this->col++;
}

void snake::move_left() {
	this->col--;
}
