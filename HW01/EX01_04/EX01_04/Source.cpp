/*EX1_04: UML/Operator Overloading 
Draw a UML diagram describing the composition relationship between the Elevator and Building class.
class Elevator {
    …
};
class Building {
   public:
       Elevator elevator;
    …
};

 Draw a UML diagram describing the inheritance relationship between the Square and Shape class.
class Shape {
    …
};
class Square : public Shape {
    …
};

When class A inherits class B, class A also inherits all public methods and variables in class B? (true/false)

When class A inherits class B, can the private members variables of class B be accessed in class A? (yes/no)

Write C++ code for the classes “Animal”, “Cat”, and “Mouth”.  These classes must implement the following UML relationship, i.e. “Cat” is an “Animal”, and it has a “Mouth”.

The C++ classes do not need to have any other member variables or methods, other than what is needed to demonstrate the class relationship.

Create a visual studio C++ project and define you classes in there.  

Your main() function should declare a Cat object.

Email the source code files (.cpp and .h) to your instructor

Create a Visual Studio C++ project and define the Circle class used in EX1_02.  For the class, define an operator + method that will add 2 circles together to give you a new Circle with their radius added. 

Your main() function should declare 2 circle objects of different radii.  Add the 2 circles with “+” to derive a 3rd circle object with a combined radii.

Email the source code files (.cpp and .h) to your instructor

(Operator overloading is a concept we will be using throughout this semester.  Please review page 31 of your CS273 textbook, and look back to your CS172 book as well, or look online.)*/

#include <iostream>
#include "Animal.h"
using namespace std;

int main() {
	//Draw a UML diagram describing the composition relationship between the Elevator and Building class.
	/*	class Elevator {
		…
	};
	class Building {
	public:
		Elevator elevator;
		…
	};*/
	/*Elevator
	
	contains
	
	Building
	*/

	//Draw a UML diagram describing the inheritance relationship between the Square and Shape class.
	/*	class Shape {
		…
	};
	class Square : public Shape {
		…
	};*/
	/*Shape
	
	contains
	
	Square*/

	//When class A inherits class B, class A also inherits all public methods and variables in class B ? (true / false) True

	//When class A inherits class B, can the private members variables of class B be accessed in class A ? (yes / no) No

	//Your main() function should declare a Cat object.
	Cat kitty;
	
}