#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T>
struct Node {
	T data;        /** The data */
	Node<T>* next; /** The pointer to the next node. */

	/** Constructor Creates a new Node that points to another Node.
	@param item  The data stored
	@param ptr   pointer to the Node that is
	Will be next to the new Node
	*/
	Node(const T& item, Node* ptr = NULL) :
		data(item), next(ptr) {}
};

template <typename T>
void showlist( Node<T> * front ) {
	Node<T> * node_ptr = front;
	while (node_ptr != NULL) {
		cout << node_ptr->data << ( node_ptr->next != NULL ? " -> " : "\n" );
		node_ptr = node_ptr->next;
	}
}

int main()
{
	Node<int> *Sally, *Mary, *Jill, *front;
	Sally = new Node<int>(5);
	Mary = new Node<int>(2, Sally);
	Jill = new Node<int>(0, Mary);
	front = Jill;

	showlist(front);

	Node<int> *Jane = new Node<int>(10);
	Jane->next = Mary->next;
	Mary->next = Jane;

	showlist(front);

	Jill->next = Mary->next;
	delete Mary;
	Mary = NULL;

	showlist(front);

	return 0;
}
