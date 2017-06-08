#ifndef RABBIT_H_
#define RABBIT_H_
#include <iostream>
using namespace std;

#include "Animal.h"

class Rabbit : public Animal {
public:
	Rabbit (int birthyear): Animal(birthyear){}

	void Speak() {
		cout << "Rabbit says: \n";
	}
};
#endif