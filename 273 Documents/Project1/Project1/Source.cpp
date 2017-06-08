#include <iostream>
#include <string>
#include <stdexcept>  // Needed for exceptions
#include <limits>     // Needed for limits of system values

using namespace std;

/**
*	Divides x by y
*	@pre y != 0 && x > 0   (this is the pre-condition for this function)
*	@param x	dividend
*	@param y 	divisor
*	@return x divided by y
*/
double division(double x, double y) {
	if (y == 0) {
		throw string("dem cannot be zero");
	}
	if (x <= 0) {
		throw out_of_range("numerator must be positive");
	}
	return x / y;
}

int main() {
	double input_x, input_y;
	try {
		do {
			cin.exceptions(ios::failbit | ios::badbit);
			cout << "Enter a numerator: ";
			cin >> input_x;
			cout << "Enter a denominator: ";
			cin >> input_y;
			cout << "Result of division is " << division(input_x, input_y) << endl;

		} while (true);
	}
	catch (ios_base::failure &ex) {
		cout << "Input failed\n";
	}
	catch (string& ms) {
		cout << ms << endl;
	}
	catch (out_of_range& oor) {
		cout << oor.what() << endl;
	}
	catch (...){
		cout << "Invalid entry\n";
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
	}
}