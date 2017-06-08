#ifndef Zoo_H_
#define Zoo_H_
#include <vector>
#include <iostream>
using namespace std;

#include "Animal.h"

class Zoo { 
private: 
	vector<Animal*> animals;

public:

	// Step 2: Complete the AddAnimal method. This will
	// take a pointer to an animal and store it in the
	// private Zoo::collection vector of Animal pointers
	void AddAnimal(Animal *animal) { 
		animals.push_back(animal);
	}


	void SimulateAnimals() { 
		std::cout << "Simulating Animals in the Zoo:\n";  
		
		for (int i = 0; i < animals.size(); i++) {
			animals[i]->Speak();
			if (typeid(Human) == typeid(*(animals[i])))
				dynamic_cast<Human*>(animals[i])->Complain();
		}

		// Step 10: Use type introspection to  identify any
		// pointers to Human objects. Downcast the animal
		// pointer so that it becomes the pointer to a human
		// that it really is. Use the new pointer to complain.


	}
};

#endif