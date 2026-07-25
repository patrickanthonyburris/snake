#include "body.hpp"

body* body::create_segment(int* key_pressed) {
	switch(*key_pressed) {
	case KEY_W:
	 	new body segment(this->x, this->y + 70);
		break;
	case KEY_A:
		new body segment(this->x + 70, this->y);
		break;
	case KEY_S:
		new body segment(this->x, this->y - 70);
		break;
	case KEY_D:
		new body segment(this->x - 70, this->y);
		break;
	default:
		new body segment(this->x, this->y - 70);
	}
	return &segment;
}
