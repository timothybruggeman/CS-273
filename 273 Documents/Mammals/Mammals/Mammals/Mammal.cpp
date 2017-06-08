#include "Mammal.h"
#include <ctime>

Mammal::Mammal(int BirthYear) {
	this->BirthYear = BirthYear;
}

int Mammal::Age() {
	time_t now = time(NULL);
	struct tm timebuf;
	localtime_s(&timebuf, &now);
	return timebuf.tm_year + 1900 - BirthYear;
}