/*EX1_03: Templates / STL Vector :
Using templates, convert the following Swap function to work with arguments of any generic type T :
void Swap(int & A, int & B) {
	int tmp = A;
	A = B;
	B = tmp;
}

Using templates, convert the following class to hold an array of any generic type T :
class MyVec {
private:
	int *array;  // dynamically allocated array

public:
	MyVec(int size) { // constructor creates array of size “size”
		array = new int[size];
	}

	~MyVec() {  // destructor returns memory back to system
		delete[] array;
	}
};

Declare an object of the template class defined in the previous question(i.e.MyVec) to hold an array of double data types.

Declare an STL vector object for storing elements of the char data type.

Write a C++ for loop to assign a value(of your choice) to every element in the vector object declared in the previous question.

What STL vector method do you use to get the current size of the vector ?*/

#include <iostream>
using namespace std;

template <typename T>

int main() {
	//Using templates, convert the following Swap function to work with arguments of any generic type T :
	/*void Swap(int & A, int & B) {
		int tmp = A;
		A = B;
		B = tmp;
	}*/
	void Swap(T & A, T & B) {
		T tmp = A;
		A = B;
		B = tmp;
	}

	//Using templates, convert the following class to hold an array of any generic type T :
	/*class MyVec {
	private:
		int *array;  // dynamically allocated array

	public:
		MyVec(int size) { // constructor creates array of size “size”
			array = new int[size];
		}

		~MyVec() {  // destructor returns memory back to system
			delete[] array;
		}
	};*/
	class MyVec {
	private:
		T *array;  // dynamically allocated array

	public:
		MyVec(int size) { // constructor creates array of size “size”
			array = new T[size];
		}
		~MyVec() {  // destructor returns memory back to system
			delete[] array;
		}
		void getStarArray() {
			return array;
		}
	};

	//Declare an object of the template class defined in the previous question(i.e.MyVec) to hold an array of double data types.
	MyVec myVec1(4);
	*(myVec1.getStarArray) = 12.0;

	//Declare an STL vector object for storing elements of the char data type.
	vector<char> charVector(5);

	//Write a C++ for loop to assign a value(of your choice) to every element in the vector object declared in the previous question.
	for (int i = 0; i < charVector.size(); i++) {
		charVector[i] = 'a';
	}

	//What STL vector method do you use to get the current size of the vector?
	// .size()
}