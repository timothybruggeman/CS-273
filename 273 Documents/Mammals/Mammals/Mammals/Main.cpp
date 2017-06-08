#include <iostream>
using namespace std;

#include "Human.h" // Step 5
#include "Cat.h" // Step 6

/**
    We will work through these steps as a class. 

	******* Look at slide for extending Mammal with Human and Cat 
	Step 1: Create Human.h and add inclusion guard (Human.h) and include iostream
	Step 2: Create Human class derived from Mammal (Human.h)  
	Step 3: Call Mammal constructor from the Human constructor to initialize BirthYear (Human.h)
	Step 4: Create Speak() method in Human. (Human.h)
	Step 5: In Main() : dynamically create a Human then output the human's age with the
			Age() member function inherited from the Mammal class. Next have the human speak() (Main.cpp)
	Step 6: Ask the class to perform step 1-5 (Cat.h & Main.cpp)
	Step 6: Create a Cat class in Cat.h and add it to the project (just like in steps 1-5 for Human)
		 make sure the cat derives from mammal. Output the cat's age with the call to the 
			inherited mammal's Age() method
	******* Look at slide for refining Mammal::Age() in Cat 
	Step 7: After building and running for step 6. Override the Age() method
			inherited from Mammal. Multiple years by 20 to get approximate human age of the cat.
	Step 8: Run program to check that calling Cat::Age() in main() returns cat years. (Main.cpp)
	******* Look at slide for object composition
	Step 9: Include Brain.h in Mammal.h
			Add a private member object of type Brain (Brain.h) then go to step 10 in (Human.h)
	Step 10: Attempt to call Mammal::brain::Think() in Human::Speak() (Human.h)
	Step 11: after step 10, make brain protected rather than private
	Step 12: Run program to check that the Human thinks before speaking! (Main.cpp)

*/

; int main() {
	Human human(1995);
	Cat cat(2010);

	cout << "Cat is " << cat.Age() << " years old" << endl;
	cat.Speak();

	cout << endl << "Human is " << human.Age() << " years old" << endl;
	human.Speak();
	// Step 5: In Main() : dynamically create a Human then output the human's age with the
	//         Age() member function inherited from the Mammal class. Next have the human speak() (Main.cpp)

	// Step 6: Create a Cat class in Cat.h and add it to the project (just like in steps 1-5 for Human)
	//         make sure the cat derives from mammal. Output the cat's age with the call to 
	//         the inherited mammal's Age() method
	int stop; cin >> stop;
}