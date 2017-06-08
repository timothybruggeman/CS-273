#ifndef Animal_H_
#define Animal_H_
#include "Brain.h"

#include <iostream>
using namespace std;

class Animal {
private:
	int BirthYear;

protected:
	Brain brain;

public:
	Animal(int BirthYear);
	int Age();

	virtual void Speak() = 0;
};

#endif