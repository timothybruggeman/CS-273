//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#include <string>
#include "Vehicle.h"

//vehicle constructor bodies
Vehicle::Vehicle() { _color = ""; _topspeed = 0; }
Vehicle::Vehicle(std::string color) { _color = color; }