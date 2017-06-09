//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#ifndef _SEDAN_H_
#define _SEDAN_H_
#include <iostream>
#include <string>
#include "Vehicle.h"

//child class of vehicle
class Sedan : public Vehicle {
private:
	int _number_of_seats;

public:
	//contructor
	Sedan(std::string color, int number_of_seats) {
		_color = color;
		_number_of_seats = number_of_seats;
		_topspeed = 95;
		wheels.resize(4);
		for (int i = 0; i < 4; i++) {
			wheels[i].setRadius(381);
		}
	}
	//descptive message about sedan
	void Description() { std::cout << "I am a " << _color << " sedan that can carry " << _number_of_seats << " people at " << _topspeed << ". Yea!" << std::endl; }
};

#endif // !_SEDAN_H_