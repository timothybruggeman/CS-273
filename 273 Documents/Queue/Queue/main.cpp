#include <iostream>
#include <string>
#include <queue>

using std::cout;
using std::endl;
using std::string;
using std::queue;

int main() {
	queue<string> ticket_counter;
	
	ticket_counter.push("Jack");
	ticket_counter.push("Jill");

	cout << "People in queue: " << ticket_counter.size() << endl;
	
	while (!ticket_counter.empty()) {
		cout << "Serving " << ticket_counter.front() << endl;
		ticket_counter.pop();
	}

}