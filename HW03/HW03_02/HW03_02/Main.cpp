#include <iostream>
#include <stdexcept>
#include <string>
#include "readint.h"

int main()
{
	int low, high;
	bool keepLooping = true;
	while (keepLooping) { //loop until range is acceptable
		std::cout << "Enter the range of values to read.\n";
		std::cout << "high: ";
		std::cin >> high;
		std::cout << "low: ";
		std::cin >> low;
		if (high <= low - 2)
			throw std::string("Range not possible");
		else keepLooping = false;
	}
	try { //check if number is between low and high
		int number = read_int("Please enter a number within the range: ", low, high);
		std::cout << "You entered " << number << std::endl;
	}
	catch (std::string& ms) {
		std::cout << ms << std::endl;
	}
	catch (std::invalid_argument &e) {
		std::cerr << "Exception: You supplied an invalid argument for read_int!\n";
		abort();
	}
}