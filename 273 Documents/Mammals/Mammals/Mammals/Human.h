// Step 1 - Create an inclusion guard for this header file and include iostream
// Step 2 - Create Human class derived from Mammal (Human.h) 
	// Step 3 : Call Mammal constructor from the Human constructor to initialize BirthYear(Human.h)
	// Step 4 : Create Speak() method in Human. Make the human cout something (Human.h)
	//          then proceed to step 5 in main.
		// Step 10: Make the human use it's mammal brain, then attempt to build and run.
		//          This won't work yet... go to step 11 in Mammal.h and make brain protected
#ifndef _HUMAN_H_
#define _HUMAN_H_
#include "Mammal.h"
#include <iostream>

class Human : public Mammal {
public:
	Human(int birthYear) : Mammal(birthYear) {};

	void Speak() { 
		brain.Think();
		cout << "Hello there!" << endl;
	}
};

#endif //_HUMAN_H_