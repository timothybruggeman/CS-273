//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#ifndef _WHEEL_H_
#define _WHEEL_H_

class Wheel {
private:
	int _radius;

public:
	//wheel constructors and setRadius
	Wheel() { _radius = 0; }
	Wheel(int radius) { _radius = radius; }
	void setRadius(int radius) { _radius = radius; }
};

#endif // !_WHEEL_H_