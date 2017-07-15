#include <iostream>
#include <cstdlib>
#include <ctime>

#include <queue> // Remember to include <queue> to use the priority queue

using namespace std;

#include "Person.h"

int main()
{	
	srand(time(NULL));
	
	priority_queue<Person> pqueue;

	pqueue.push(Person("Joe", 35));
	pqueue.push(Person("Mary", 37));
	pqueue.push(Person("Sue", 27));
	

	while (!pqueue.empty()) {
		cout << pqueue.top().Name() << endl;
		pqueue.pop();
	}

	int stop; cin >> stop;
}