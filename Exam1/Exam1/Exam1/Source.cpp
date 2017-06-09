//I affirm that all code given below was written solely by me, Timothy, and that any help I received adhered to the rules stated for this exam.

#include "Pickup.h"
#include "Racecar.h"
#include "Sedan.h"

int main()
{
	//Create an array to hold three vehicles
	Vehicle* Garage[3];

	//Create the three vehicles
	Vehicle* r = new RaceCar("red");
	Vehicle* s = new Sedan("brown", 5);
	Vehicle* p = new Pickup("black", 600);
	Garage[0] = r;
	Garage[1] = s;
	Garage[2] = p;

	//Display each of their messages
	for (int i = 0; i < 3; ++i) { Garage[i]->Description(); }
}