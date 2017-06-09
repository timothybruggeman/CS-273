//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#ifndef _VEHICLE_H_
#define _VEHICLE_H_
#include <string>
#include <vector>
#include "Wheel.h"

//abstract base class
class Vehicle {
protected:
	//variables all vehicles have
	std::string _color;
	int _topspeed;
	std::vector<Wheel> wheels;

public:
	//vehicle constructors and virtual description function
	Vehicle();
	Vehicle(std::string color);
	virtual void Description() = 0;
};

#endif // !_VEHICLE_H_