#include "Brain.h"
#include <iostream>
using namespace std;

void Brain::Think() {
	cout << "Thinking ... ";
	for (int i = 0; i < 5; ++i) {
		cout << "|";
		Sleep(100);
		cout << "\b/";
		Sleep(100);
		cout << "\b-";
		Sleep(100);
		cout << "\b\\";
		Sleep(100);
		cout << "\b";
	}
	cout << "burp!\n";
}
