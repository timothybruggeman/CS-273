#ifndef _FOOTWEAR_H_
#define _FOOTWEAR_H_

#include <string>

class FootWear
{

public:
	FootWear(int size) {
		// Complete the implementation
	}
	virtual void Description() = 0;
};

class Wheel
{
private:
	std::string color;
public:
	Wheel() {}
	void set_color(std::string color) {
		this->color = color;
	}
};
#endif // _FOOTWEAR_H_
