#include "Animal.h"
#include <ctime>

Animal::Animal(int BirthYear) {
	this->BirthYear = BirthYear;
}

int Animal::Age() {
	time_t now = time(NULL);
	struct tm timebuf;
	localtime_s(&timebuf, &now);
	return timebuf.tm_year + 1900 - BirthYear;
}