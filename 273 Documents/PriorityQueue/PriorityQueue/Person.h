#ifndef _PERSON_H_
#define _PERSON_H_
#include <string>

/**
*  Simple class for modeling a person object
*/
class Person
{
private:
	std::string name; // Name of person
	int age; // Age of person

public:
	/**
	* No-argument constructor
	*/
	Person() {}

	/**
	* Constructor for creating a person with a name and age
	*/
	Person(const std::string &name, int age) : name(name), age(age) {}
	
	/**
	* Getter method for getting the name of this person
	*/
	std::string Name() const {
		return name;
	}

	/**
	* Getter method for getting the age of this person
	*/
	int Age() const {
		return age;
	}

	bool operator<(const Person& other) const {
		if (this->name < other.Name())
			return true;
		else if ((this->name < other.Name())&&(this->age<other.Age())) {

		}
		else return false;
	}
};
#endif