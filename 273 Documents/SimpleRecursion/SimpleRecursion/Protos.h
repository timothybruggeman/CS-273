#ifndef PROTOS_H_
#define PROTOS_H_
#include <string>
#include <stack>
#include "Node.h"

/**
* Function prototypes
*/
void initialize();
double factorial(int N);
int height(std::stack<std::string> tower);
void print_stack(std::stack<std::string> stack_of_words);
void print_list(Node<std::string> *node);
string reverse_string(std::string sentence);

// Global stack and linked-list defined and initialized in Initialize.cpp
extern std::stack<std::string> stack_of_words;
extern Node<std::string> *list_of_words;


#endif