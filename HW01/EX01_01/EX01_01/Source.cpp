/* EX1_01: Pointers
Write the C++ declaration for a pointer variable that can store the address of a double variable:

Write a C++ statement that will use the C++ new operator to dynamically allocate memory for a double variable. Store the address of this newly allocated double in the pointer variable you declared in the previous step.

Write a C++ statement that will assign the double value 4.12 to the memory for the double variable that you allocated from step 5.  HINT: You will need to use the * operator and the pointer variable that holds the address of the double.

Write a C++ statement that will release the memory that was allocated using the new operator.

What is wrong with the following code?
char *variable ;
variable = 3;

What operator would you use to obtain the memory address of the variable, myVar?
int myVar;

Declare and allocate an array of 10 int elements using dynamic memory allocation.

Write a C++ for loop that assigns the integer value 42 to every element in the array allocated in the previous question. However, you must use pointer arithmetic to advance and access each element (don’t use array notation).

Write a statement that will release the memory allocated for the array in question 6 back to the operating system.

Write the code for a function that has the following prototype
int *doubleCapacity(int *list, int size);

The function doubles the size (indicated by the parameter size) of the array passed in through parameter list.
(HINT: This was a CS172 homework assignment!) */

#include <iostream>
using namespace std;

int *doubleCapacity(int *list, int size);

int main() {
	//Write the C++ declaration for a pointer variable that can store the address of a double variable:
	double variable;
	double *pvariable = &variable;

	//Write a C++ statement that will use the C++ new operator to dynamically allocate memory for a double variable. Store the address of this newly allocated double in the pointer variable you declared in the previous step.
	pvariable = new double;

	//Write a C++ statement that will assign the double value 4.12 to the memory for the double variable that you allocated from step 5.  HINT: You will need to use the * operator and the pointer variable that holds the address of the double.
	*pvariable = 4.12;

	//Write a C++ statement that will release the memory that was allocated using the new operator.
	delete[] pvariable;

	//What is wrong with the following code?
	//char *variable;
	//variable = 3;
	//I assume you meant to change the value of what the pointer is pointing to in which case you would have to say:
	//*variable = 3;

	//What operator would you use to obtain the memory address of the variable, myVar ?
	int myVar;
	int *pmyVar = &myVar;

	//Declare and allocate an array of 10 int elements using dynamic memory allocation.
	int arraySize = 1;
	int* a = new int[arraySize];
	for (int i = 0; i < 10; i++) {
		int arrayIntegerInput = 0;
		if (i >= arraySize) {
			arraySize++;
			int* temp = new int[arraySize];
			for (int ii = 0; ii<i; ii++) {
				temp[ii] = a[ii];
			}
			delete[] a;
			a = temp;
		}
		*(a + i) = arrayIntegerInput;
	}

	//Write a C++ for loop that assigns the integer value 42 to every element in the array allocated in the previous question. However, you must use pointer arithmetic to advance and access each element (don’t use array notation).
	for (int i = 0; i < 10; i++) {
		*(a + i) = 42;
	}

	//Write a statement that will release the memory allocated for the array in question 6 back to the operating system.
	delete[] a;

	//Write the code for a function that has the following prototype: int *doubleCapacity(int *list, int size);
	doubleCapacity(a, 10);
}

int *doubleCapacity(int *list, int size) {
	size = size * 2;
	int* temp = new int[size];
	for (int i = 0; i < size; i++) {
		temp[i] = list[i];
	}
	delete[] list;
	list = temp;
}