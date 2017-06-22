#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

/**
* Template function for displaying the contents of a vector.
* Type is the template parameter, and can represent a vector of any type
*
* @param header	A string to display before printing the content of the vector
* @param array	The vector to display
*/
template <typename Type>
void display(string header, Type array) {
	cout << header << endl;
	for (int i = 0; i < array.size(); ++i) {
		cout << "Name : " << array[i] << endl;
	}
}

int main() {
	CS273::vector<string> myvec;

	myvec.push_back("Joshua");
	myvec.push_back("Vanessa");
	myvec.push_back("Andrew");
	myvec.push_back("Vicki");

	myvec.insert(2, "Nathan");

	myvec.push_back("Forrest");
	myvec.push_back("Katie");

	myvec.insert(1, "Mark");

	display("Part 1: ", myvec);

	myvec.erase(1);
	myvec.erase(2);

	myvec[0] = "Wes";
	myvec[3] = "John";

	// CS273::vector<string> myvec2;
	// myvec2 = myvec;

	display ("Part 2: ", myvec);

}