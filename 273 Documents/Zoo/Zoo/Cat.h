#ifndef CAT_H_
#define CAT_H_
#include <iostream>
using namespace std;

#include "Animal.h"

class Cat : public Animal {
public:
	Cat(int year) : Animal(year) {}
	
	void Speak() {
		cout << "Cat says: Meow!\n";
	}

	int Age() {
		return 20 * Animal::Age();
	}
};

#endif