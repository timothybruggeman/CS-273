#include <iostream>
using namespace std;
#include "Cat.h"
#include "Human.h"

// Step 3a: include zoo.h so we can create a zoo object
#include "zoo.h" 

#include "Rabbit.h" // Step 9


int main() {
	cout << "BEGIN\n";
	Zoo whitworth;

	Animal* h = new Human(1995);
	Animal* c1 = new Cat(2010);
	Animal* c2 = new Cat(2011);
	Animal* r = new Rabbit(2016);
	

	whitworth.AddAnimal(h);
	whitworth.AddAnimal(c1);
	whitworth.AddAnimal(c2);
	whitworth.AddAnimal(r);

	whitworth.SimulateAnimals();

	// Step 3c: Create a Cat and a Human and add them to the zoo
	//        make sure and give each a birth year!

	// Step 8: Add a rabbit object to the zoo

	// Step 5: Call the SimulateAnimals() method of the 
	// whitworth zoo object
	int stop; cin >> stop;
}