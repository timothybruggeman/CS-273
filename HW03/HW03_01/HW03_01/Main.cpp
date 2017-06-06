#include <iostream>
#include <stdexcept>
#include "readint.h"
using namespace std;

int main()
{
	int low, high;
	cout << "Enter the range of values to read.\n";
	cout << "high: ";
	cin >> high;
	cout << "low: ";
	cin >> low;
	try
	{
		int number = read_int("Please enter a number within the range: ", low, high);
		cout << "You entered " << number << endl;
	}
	//The problem is right here!!!
	catch (std::invalid_argument &e) {
		e = e;
		cerr << "Exception: You supplied an invalid argument for read_int!\n";
		abort();
	}
}
