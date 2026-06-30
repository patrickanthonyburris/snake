#include "space.hpp"

void space::set_apple() {
	this->is_apple = true;
}

void space::remove_apple() {
	this->is_apple = false;
}

bool space::get_apple_status() {
	return this->is_apple;
} 
