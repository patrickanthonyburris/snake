#ifndef SPACE_HPP
#define SPACE_HPP

class space {
private:
	bool is_occupied = false;
	bool is_apple = false;
public:
	void set_apple();
	void remove_apple();
	bool get_apple_status();
};

#endif
