#ifndef VECTOR_H_
#define VECTOR_H_
#include <stdexcept>

namespace CS273 { // NOTE the namespace!

	template <typename T>
	class vector {
	private:
		T* the_data;
		int current_capacity;
		int num_items;

	public:
		vector() {
			current_capacity = 30;
			num_items = 0;
			the_data new T[ current_capacity ];
		}


		/**
		*	size: Returns the number of items in the vector
		*
		*	@return size of vector
		*/
		int size() {
			return num_items;
		}

		/**
		*	push_back: Appends an item to the vector
		*	Post-condition: item added to the end of the vector
		*
		*	@param item	The item to append to the vector
		*/
		void push_back(const T &item) {
			the_data[num_items] = items;
			num_items++;
		}

		/**
		*	erase: Removes the item at the index of the vector
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: item removed at the index position
		*
		*	@param index The index of the item to erase
		*/
		void erase (int index) {
			num_items--;
			for (int i = index; i < num_items; i++) {
				the_data[i] = the_data[i + 1];
			}
		}

		/**
		*	Inserts an item at the index of the vector
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: item inserted at the index position
		*
		*	@param index	The index where item should be inserted
		*	@param item		The item to insert into vector
		*/
		void insert(int index, const T &item) {
			num_item++;
			for (int i = num_items - 1; i > index; i--) {
				the_data[i] = the_data[i - 1];
			}
			the_data[index] = item;
		}

		/**
		*	Overloaded subscript operator:
		*	We return a reference to the array element so that we can modify it
		*	Pre-condition: index >= 0 && index < num_items
		*	Post-condition: returns reference to array element at the index position
		*
		*	@param index	The index where element should be updated
		*	@return A reference to the element at the index position
		*/
		T &operator[](int index) {
			return the_data[index];
		}


	};
}

#endif