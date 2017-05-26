#ifndef ANIMAL_H_
#define ANIMAL_H_

//Write C++ code for the classes “Animal”, “Cat”, and “Mouth”.These classes must implement the following UML relationship, i.e.“Cat” is an “Animal”, and it has a “Mouth”.
//The C++ classes do not need to have any other member variables or methods, other than what is needed to demonstrate the class relationship.
//Create a visual studio C++ project and define you classes in there.
class Animal {
};
class Mouth {
};
class Cat : public Animal {
private:
	Mouth mouth;
};

#endif // !ANIMAL_H_
