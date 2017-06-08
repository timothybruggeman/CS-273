#ifndef MAMMAL_H_
#define MAMMAL_H_
#include "Brain.h"
    // Step 9: include Brain.h

class Mammal {
private:
	int BirthYear;
protected:
	Brain brain;
	// Step 9: add a private member object of type Brain (Brain.h) then go to step 10 in (Human.h)
	// Step 11: after step 10, make brain protected rather than private, build and run again.

public:
	Mammal(int BirthYear);
	int Age();
};

#endif