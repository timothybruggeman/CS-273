#include "readint.h"
#include <stdexcept>
#include <iostream>
int read_int(const std::string &prompt, int low, int high) {
	std::cin.exceptions(std::ios_base::failbit);
	int num = 0;
	bool keepLooping = true;
	while (keepLooping) { // Loop until valid input
		try {
			std::cout << prompt;
			std::cin >> num;
			if (num <= low || num >= high) //message is number is out of range
				std::cout << "That number was outside the specified range." << std::endl;
			else return num;
		}
		catch (std::ios_base::failure& ex) { //catch any input other than an integer
			std::cout << "Bad numeric string -- try again\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		}
	}
}