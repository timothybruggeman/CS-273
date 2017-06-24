#include <iostream>
#include <stack>
#include <string>
#include "Node.h"
using namespace std;

/**
   The five parts of a recursive solution:

   1. CHECK If the problem is "small enough"
   2.     Solve the small problem (base case) directly.
   Else
   3.     Break the problem into one or moresmaller sub-problems
   4.     Solve each sub-problem recursively
   5.     Combine the solution of the sub-problems into a solution to the whole problem (optional)
*/


/**
  Problem 1 - Factorial (warm up)
  factorial(N) = 1 * 2 * 3 * 4 * ... * N
  Ask yourself:
  What is the simplest value for N to solve? --> base case
  Given a large N, how can you make N become this simple case? 
  How will you combine the solutions to your sub-problems to derive your solution for the whole problem?
*/

double factorial(int N) {
	if (N == 0)
		return 1;
	else return N * factorial(N - 1);
}

/**
  Problem 2 - return the height of this stack
  Ask yourself:
  What is the simplest stack to solve? --> base case
  Given a tall stack, how can you make the stack become this simple case? How do you make the stack smaller?
  How will you combine the solutions to your sub-problem to derive your solution for the whole problem?
*/
int height(stack<string> words) {
	if (words.empty())
		return 0;
	else {
		words.pop();
		return height(words) + 1;
	}
}

/**
  Problem 3 - print the words from a stack starting from the bottom to the top, separated by space
  Ask yourself:
  What is the simplest stack to print? --> base case
  Given a tall stack, how can you make the stack become this simple case? 
  What will you print to cout in each recursive call such that the combined result is the solution?
  */
void print_stack(stack<string> words) {
	if (!words.empty()) { /* I have an empty stack.  Nothing to do.  Base case! */
		string word = words.top();  // This is the word at the top of the stack
		words.pop();
		print_stack(words);
		cout << word << " ";
	}
}

// Problem 4 - Print the words starting from the end to the front of the list separated by space
// Your input is a single-linked list, terminated with NULL.  Each "node" in the list is define in Node.h.
// Objective: Apply a known solution in a different context
void print_list(Node<string> *words) {
	if (words != NULL) { /* I have reached the end of my list.  Base case! */
		string word = words->data; // This is the word stored in the current node
		words->next;
		print_list(words);
		cout << word << " ";
	}
}

// Problem 5 - reverse a string and return it
// A favorite interview question!
// You can consult http://www.cplusplus.com/reference/string/string/ 
string reverse_string(string sentence) {
	if (sentence.length() == 0)	return "";

	string last(1, sentence[sentence.length() - 1]);
	string reversed = reverse_string(sentence.substr(0, sentence.length() - 1));
	return last + reversed;
}