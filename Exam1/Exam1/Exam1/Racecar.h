//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#ifndef _RACECAR_H_
#define _RACECAR_H_
#include <iostream>
#include <string>
#include "Vehicle.h"

//child class of vehicle
class RaceCar : public Vehicle {
public:
	//contructor
	RaceCar(std::string color) {
		_color = color;
		_topspeed = 250;
		wheels.resize(4);
		for (int i = 0; i < 4; i++) {
			wheels[i].setRadius(305);
		}
	}
	//descptive message about racecar
	void Description() { std::cout << "I am a " << _color << " race car that can race " << _topspeed << "mph. Vroom!" << std::endl; }
};

#endif // !_RACECAR_H_