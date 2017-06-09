//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#ifndef _PICKUP_H_
#define _PICKUP_H_
#include <iostream>
#include <string>
#include "Vehicle.h"

//child class of vehicle
class Pickup : public Vehicle {
private:
	int _hauling_capacity;

public:
	//contructor
	Pickup(std::string color, int hauling_capacity) {
		_color = color;
		_hauling_capacity = hauling_capacity;
		_topspeed = 85;
		wheels.resize(4);
		for (int i = 0; i < 4; i++) {
			wheels[i].setRadius(432);
		}
	}
	//descptive message about pickup
	void Description() { std::cout << "I am a " << _color << " pickup that can haul " << _hauling_capacity << " sq. feet at " << _topspeed << " mph." << std::endl; }
};

#endif // !_PICKUP_H_