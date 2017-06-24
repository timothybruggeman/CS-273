#ifndef CS273_QUEUE_H_
#define CS273_QUEUE_H_

#include <iostream>
#include <stdexcept>

namespace CS273 {

	/**
	* Circular Array Implementation
	*/
	template <typename Type>
	class carray {
	private:
		Type * the_array;	// Array of type Type
		int capacity;		// Capacity of array
		int num_items;		// Number of valid items in array
		int head;			// Index of the first item
		int tail;			// Index of the last item

	public:
		/**
		* No argument constructor
		* The constructor initializes the properties of this circular array
		*/
		carray<Type>() { 
			// FIX ME! 
			// Look at the properties in this class, and look at your notes to complete this
			capacity = 30; // We initially assume a default capacity of 30
			num_items = 0; // We initially have no items in circular array
			// the_array = ???
			// head = ???
			// tail = ???
		}

		/**
		* Returns the item at the front of the circular array
		*/
		Type &front() {
			if (num_items == 0) // wait a minute, there is nothing at the front!
				throw std::out_of_range("There is nothing in this container!");
			
			// FIX ME!
			// What property of this circular array tells you where the front item is?
			

		}

		/**
		* Appends an item to the back of the circular array
		*/
		void push(const Type &item) {
			if (num_items == capacity) // the array is full
				reserve(2 * capacity); // double the size of the array

			// FIX ME!
			// What properties need to be modified to add an item to the back of this circular array?
			


			++num_items; // Remember to increment num_items
		}

		/**
		* Removes an item from the front of the circular array
		*/
		void pop() { 
			if (num_items == 0) // wait a minute, there is nothing at this container!
				throw std::out_of_range("There is nothing in this container!");

			// FIX ME!
			// What properties need to be modified to "remove" the front item from the circular array?
			

			--num_items; // Remember to decrement num_items!
		}

		/**
		* Returns the number of items in the circular array
		*/
		int size() { 
			// FIX ME! 
			// What property keeps track of the number of items currently in the circular array?
			
		}
		
#pragma region RuleOfThree
		/***************** Rule of Three ********************/
		
		/** 
		* Destructor 
		*/
		virtual ~carray<Type>() { 
			// Return memory back to system
			delete [] the_array;
		}

		/** 
		* Copy constructor 
		*/
		carray<Type>(const carray<Type> &other) { 
			// Perform a deep copy
			capacity = other.capacity; // reserve enough space in the_array of "this" queue
			the_array = new Type[capacity];
			// Initialize an empty circular array to begin with
			num_items = 0; 
			head = 0;
			tail = capacity - 1;

			if (other.num_items > 0) {
				// iterate from head to tail
				for (int i = other.head; i <= other.tail; i = (++i%other.capacity)) { 
					push(other.the_array[i]); // push items from the "other" queue, to "this" queue
				}
			}
		}

		/** 
		* Assignment operator 
		*/
		carray<Type> &operator=(carray<Type> other) {
			// Copy-swap idiom
			swap(*this, other);
			return *this;
		}

		/**
		* Swaps circular array A with circular array B
		*/
		void swap(carray<Type> &A, carray<Type> &B) {
			std::swap(A.capacity, B.capacity);
			std::swap(A.num_items, B.num_items);
			std::swap(A.head, B.head);
			std::swap(A.tail, B.tail);
			std::swap(A.the_array, B.the_array);
		}

		/*************** End of Rule of Three *******************/
#pragma endregion

	private:
		/** 
		* Increases the capacity of the array
		* @param new_size	The new size of the array
		*/
		void reserve(int new_size) {
			if (new_size <= capacity)
				return;

			Type *new_array = new Type[new_size]; // create new array with larger size

			for (int i = head, j = 0; i <= tail; i = (++i%capacity)) { // iterate from head to tail
				new_array[j++] = the_array[i]; // copy items from the_array to new_array
			}
			delete[] the_array;  // delete old array

			capacity = new_size;	// update new large capacity
			the_array = new_array;	// assign new array to the_array
			head = 0;				// reset head to 0
			if (num_items > 0)		
				tail = num_items - 1; // assign tail the index of the last item
			else
				tail = capacity - 1; // re-initialize tail to the end of the_array 
		}
	};
}

#endif