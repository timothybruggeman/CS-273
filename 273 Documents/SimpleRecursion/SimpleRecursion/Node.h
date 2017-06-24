#ifndef NODE_H_
#define NODE_H_
#include <iostream>

/**
*  Node object used to create a single-linked list
*/
template <typename Type>
struct Node { // Remember a struct exactly a class but with all members public
	Node *next;
	Type data;

	// Constructor for creating a node
	Node<Type>(Type data, Node *next = NULL) {
		this->data = data;
		this->next = next;
	}
};

#endif