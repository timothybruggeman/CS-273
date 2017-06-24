#include <iostream>
#include <cstdlib>
#include <ctime>

#include <queue> // Remember to include <queue> to use the priority queue

using namespace std;

#include "Person.h"

int main()
{	
	srand(time(NULL));
	
	// Todo: Create a priority queue called pqueue that can hold person objects and add 3 persons to the priority queue
	// Dont forget to fix the Person class in Person.h and overload operator<()

	while (!pqueue.empty()) {
		cout << pqueue.top().Name() << endl;
		pqueue.pop();
	}

}