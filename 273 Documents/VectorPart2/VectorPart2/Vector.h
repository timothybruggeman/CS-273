#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <stdexcept>

namespace CS273 {
	template <typename T>
	class vector {
	private:
		T *the_data; // dynamic array of type T
		int current_capacity; // size of dynamic array
		int num_items; // number valid items in dynamic array

	public:
		vector<T>() {
			current_capacity = 30;
			the_data = new T[current_capacity];
			num_items = 0;
		}

		/** THE RULE OF THREE **/
		/* TODO: complete destructor 
		// Destructor: responsible for cleaning up when the object is destroyed
		virtual ~vector<T>() {
			
		}
		*/

		/* TODO: complete copy constructor
		// Copy constructor: a special constructor that is called when an object is copied
		vector<T>(const vector<T> &copy) {   
			
		}
		*/

		/* TODO: complete assignment operator
		// Assignment operator: makes a copy of the object during assignment
		vector<T> &operator=(vector<T> copy) { 
			swap(*this, copy);
			return *this;
		}
		*/


		/**
		*	size: returns the number of items in the vector
		*
		*	@return size of vector
		*/
		int size() {
			return num_items;
		}

		/**
		*	push_back: appends an item to the vector
		*	Post-condition: item added to the end of the vector
		*
		*	@param item	The item to append to the vector
		*/
		void push_back(const T &item) {
			if (num_items == current_capacity) {
				reserve(2 * current_capacity);
			}

			the_data[num_items] = item;
			++num_items;
		}

		/**
		*	erase: removes the item at the index of the vector
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: item removed at the index position
		*
		*	@param index The index of the item to erase
		*/
		void erase(int index) {
			if (index < 0 || index >= num_items)
				throw std::invalid_argument("invalid index");

			--num_items;
			for (int k = index; k < num_items; ++k)
				the_data[k] = the_data[k + 1];
		}

		/**
		*	insert: inserts an item at the index of the vector
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: item inserted at the index position
		*
		*	@param index	The index where item should be inserted
		*	@param item		The item to insert into vector
		*/
		void insert(int index, const T &item) {
			if (index < 0 || index >= num_items)
				throw std::invalid_argument("index not valid");

			++num_items;
			for (int k = num_items - 1; k > index; --k)
				the_data[k] = the_data[k - 1];
			the_data[index] = item;
		}

		/**
		*	operator[]: overloaded subscript operator:
		*	We return a reference to the array element so that we can modify it
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: returns reference to array element at the index position
		*
		*	@param index	The index where element should be updated
		*	@return A reference to the element at the index position
		*/
		T &operator[](int index) {
			if (index < 0 || index >= num_items)
				throw std::invalid_argument("index invalid");

			return the_data[index];
		}


		/**
		*  reserve: expand the capacity of the internal array
		*
		*  @param: new_capacity The new size of the internal array
		*/
		void reserve(int new_capacity) {
			T * new_data = new T[new_capacity]; // create the new array

			for (int i = 0; i < num_items; ++i) // copy contents of old array to new array
				new_data[i] = the_data[i];
			delete[] the_data;					// delete the old array

			the_data = new_data;				// point to the new array
			current_capacity = new_capacity;	// update the current capacity property
		}

	private:
		/**
		*	Swaps between a pair of vectors 
		*
		*	@param a	first of pair of vector to swap
		*	@param b	second of pair of vector to swap
		*/
		void swap(vector<T> &a, vector<T> &b) {
			std::swap(a.current_capacity, b.current_capacity);
			std::swap(a.num_items, b.num_items);
			std::swap(a.ref_count, b.ref_count);
			std::swap(a.the_data, b.the_data);
		}
	};
}

#endif