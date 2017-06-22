#include <iostream>

using namespace std;

template <typename T>
struct DNode {
	
	// Step 1: Complete the DNode Structure
};

int main() {

	// Create a linked list manually. 
	// We do not create lists this way typically!
	// Step 2: The linked list is created for you alreay...
	DNode<string> *Harry = new DNode<string>("Harry", NULL, NULL);
	DNode<string> *tail = Harry;
	DNode<string> *Dick = new DNode<string>("Dick", Harry, NULL);
	Harry->prev = Dick;
	DNode<string> *Tom = new DNode<string>("Tom", Dick, NULL);
	Dick->prev = Tom;
	DNode<string> *head = Tom;

	// Step 3: Manually Insert Sharon before Harry
	DNode<string> *Sharon = new DNode<string>("Sharon");
	// TODO Insert Sharon before Harry

	// Remove Sharon from the list
	// TODO Remove Sharon from the list



	return 0;
}