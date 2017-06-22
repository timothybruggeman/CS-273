#include <iostream>
#include <vector>

using namespace std;

#include "Object.h"

template <typename T>
class smart_ptr 
{
private:
	T *obj;

public:
	/**
	* Constructor: Assigns an object to be managed
	*/
	smart_ptr<T>(T *ptr) : obj(ptr) 
	{}

	/**
	* Destructor: Deallocates object is no longer referenced
	*/
	virtual ~smart_ptr<T>() {
		delete obj;
	}

#pragma region CopyAndAssignment 
	/*
	// Copy constructor: Copys the object to "this" object and increments reference count
	smart_ptr(const smart_ptr<T> &copy) {
		this->obj = copy.obj;
		this->ref_count = copy.ref_count;
		++*ref_count;
	}

	// Assignment operator: assigns copy to "this" object
	// 1. pass-by-value parameter calls the copy constructor
	// 2. swap "copy" into *this
	// Refer to slides for more details
	smart_ptr<T> &operator=(smart_ptr<T> copy) {
		swap(*this, copy);
		return *this;
	}

	// Swaps a with b and vice-versa
	void swap(smart_ptr<T> &a, smart_ptr<T> &b) {
		std::swap(a.obj, b.obj);
		std::swap(a.ref_count, b.ref_count);
	}
	*/
#pragma endregion 

	/**
	* Dereference operator: allows us to access the object pointed to by a pointer
	*/
	T operator*() {
		return *obj;
	}

	/**
	* Arrow operator:  allows us to invoke methods/properties defined in a pointer to an object
	*/
	T * operator->() {
		return obj;
	}
};

int main() 
{
	{ 
		smart_ptr<Object> ptr(new Object(1));
		cout << ptr->get_id() << endl;
	}

	cout << "End of main function\n";
	int stop; cin >> stop;
}