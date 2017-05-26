#ifndef CIRCLE_H_
#define CIRCLE_H_

//Declare a C++ class called Circle that conforms to the following description :
//It has a private property(member variable) called radius that is of a double data type. ()
//It has a public default constructor that initializes the radius of a circle object to “0”()
//It has a public overloaded constructor that takes a parameter to initialize the radius of a circle object()
//It has a public method called getArea() that returns the computed area(π*radius*radius) of the circle object. ()
//It has public getter and setter methods for accessing and modifying the radius of a circle object respectively()

class Circle {
private:
	double radius;

public:
	Circle() {
		radius = 0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return radius * radius * 3.14159;
	}
	double getRadius() {
		return radius;
	}
	void setRadius(double r) {
		radius = r;
	}
	//Create a Visual Studio C++ project and define the Circle class used in EX1_02.For the class, define an operator + method that will add 2 circles together to give you a new Circle with their radius added.
	double addRadii(double r1, double r2) {
		return r1 + r2;
	}
};
#endif