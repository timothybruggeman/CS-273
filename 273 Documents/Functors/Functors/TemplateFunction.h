#ifndef MYTEMPLATE_FUNC_
#define MYTEMPLATE_FUNC_
#include <iostream>

template <typename T> // Template type T should be some type of iterator (or possibly even a pointer)
void show_all(T begin, T end) 
{
	std::cout << "show_all:\n";				// Print a header
	for (T it = begin; it != end; ++it) {	// Iterate from begin to end
		std::cout << *it << std::endl;		// Print the content of each iterator
	}
}

#endif