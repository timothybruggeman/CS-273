// Step 6: Create a Cat class in Cat.h (with inclusion guard) and add it to the project
// (just like in steps 1 - 5 for Human) make sure the cat derives from mammal.Output the 
// cat's age with the call to the inherited mammal's Age() method

//        Step 7: After building and running for step 6. Override the Age() method
//                inherited from Mammal. Multiple years by 20 to get approximate human
//                age of the cat.
//        Step 8: Run program to check that calling Cat::Age() in main() returns cat years. (Main.cpp)
#ifndef _CAT_H_
#define _CAT_H_
#include "Mammal.h"
#include <iostream>

class Cat : public Mammal {
public:
	Cat(int birthYear) : Mammal(birthYear) {}

	void Speak() { cout << "Meow" << endl; }

	int Age() {return 20 * Mammal::Age();}
};

#endif //_CAT_H_