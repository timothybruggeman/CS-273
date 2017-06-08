#ifndef HUMAN_H_
#define HUMAN_H_
#include <iostream>
using namespace std;

#include "Animal.h"

class Human : public Animal {
public:
	Human(int year) : Animal(year) {}
	
	void Speak() {
		brain.Think();
		cout << "Human says: Howdy!\n";
	}

	// Step 9: Defint a Complain method for 
	// humans. Output a complaint.
	void Complain() { 
		cout << "We need more animals here \n";
	}
};

#endif