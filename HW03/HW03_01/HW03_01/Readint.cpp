#include "readint.h"
#include <stdexcept>
#include <iostream>
int read_int(const std::string& prompt) {
	std::cin.exceptions(std::ios_base::failbit);
	int num = 0;
	while (true) { // Loop until valid input
		try {
			std::cout << prompt;
			std::cin >> num;
			return num;
		}
		catch (std::ios_base::failure& ex) {
			ex = ex;
			std::cout << "Bad numeric string -- try again\n";
			// Reset the error flag
			std::cin.clear();
			// Skip current input line
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			abort();
		}
	}
}