#ifndef OBJECT_H_
#define OBJECT_H_
#include <iostream>

/**
* Generic class for smart pointer examples
*/
class Object
{
private:
	int id;

public:
	/** 
	* Constructor: sets the ID of this object
	*/
	Object(int id) {
		this->id = id;
		std::cout << "Constructor for id " << id << std::endl;
	}

	/**
	* Destructor
	*/
	virtual ~Object() {
		std::cout << "Destructor " << id << std::endl;
	}

	/**
	* Returns the ID of this object
	*/
	int get_id() {
		return id;
	}
};


#endif