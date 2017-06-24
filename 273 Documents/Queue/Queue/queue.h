#ifndef QUEUE_H_
#define QUEUE_H_
#include "carray.h"

namespace CS273 {

	template <typename Type>
	class queue {
	private:
		carray<Type> container; // Adapter design pattern:
								// "queue" is the adapter and "carray" is the adaptee
	public:
		/**
		* Add item to the back of the queue
		*/
		void push(const Type &item) {
			container.push(item);
		}

		/**
		* Remove item from the front of the queue
		*/
		void pop() {
			container.pop();
		}

		/**
		* Access item at the front of the queue
		*/
		Type &front() {
			return container.front();
		}

		/**
		* Number of items in the queue
		*/
		int size() {
			return container.size();
		}

		/**
		* Indicates if queue is empty
		*/
		bool empty() {
			return (container.size() == 0);
		}

	};
}
#endif