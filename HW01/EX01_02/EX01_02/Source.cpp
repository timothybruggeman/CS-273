//EX1_02: Classes
//Declare a C++ class called Circle that conforms to the following description :
	//It has a private property(member variable) called radius that is of a double data type. ()
	//It has a public default constructor that initializes the radius of a circle object to “0”()
	//It has a public overloaded constructor that takes a parameter to initialize the radius of a circle object()
	//It has a public method called getArea() that returns the computed area(π*radius*radius) of the circle object. ()
	//It has public getter and setter methods for accessing and modifying the radius of a circle object respectively()

//Declare a Circle object variable, called myCircle1, using the default constructor.

//Declare a Circle object variable, called myCircle2, using the overloaded constructor to initialize its radius to “10”.

//Declare a pointer variable to a Circle object, and allocate memory for it using the overloaded constructor to initialize its radius to “12”.

//Declare an array of 10 Circle objects using the default constructor.

//Write a C++ for loop that assigns the radius of every Circle object in the array defined in the previous question to “15”.

#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	//Declare a Circle object variable, called myCircle1, using the default constructor.
	Circle myCircle1;

	//Declare a Circle object variable, called myCircle2, using the overloaded constructor to initialize its radius to “10”.
	Circle myCircle2(10.0);

	//STILL IN PROGRESS!!
	//Declare a pointer variable to a Circle object, and allocate memory for it using the overloaded constructor to initialize its radius to “12”.
	Circle *pmyCircle2;

	//Declare an array of 10 Circle objects using the default constructor.
	Circle myCircleArray[10];

	//Write a C++ for loop that assigns the radius of every Circle object in the array defined in the previous question to “15”.
	for (int i = 0; i < 10; i++) {
		myCircleArray[i].setRadius(15.0);
	}

	//Your main() function should declare 2 circle objects of different radii. Add the 2 circles with “ + ” to derive a 3rd circle object with a combined radii.
	Circle myCircle(0);
	Circle myCircle3(3.0), myCircle4(4.0);
	Circle myCircle7(myCircle.addRadii(myCircle3.getRadius(), myCircle4.getRadius()));
}