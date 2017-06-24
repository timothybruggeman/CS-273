#include <iostream>
#include <string>
using namespace std;
#include "Node.h"
#include "Protos.h"

int main() {

	initialize();

	// Problem 1
	cout << "Problem 1:\n";
	cout << "Factorial for 100 is " << factorial(100) << endl;

	// Problem 2
	cout << "Problem 2:\n";
	cout << "Height of stack is " << height(stack_of_words) << endl;

	// Problem 3
	cout << "Problem 3:\n";
	print_stack(stack_of_words);
	cout << endl;

	// Problem 4
	cout << "Problem 4:\n";
	print_list(list_of_words);
	cout << endl;

	// Problem 5
	cout << "Problem 5:\n";
	string sentence = "!372SC enod lleW";
	cout << reverse_string(sentence) << endl;

}