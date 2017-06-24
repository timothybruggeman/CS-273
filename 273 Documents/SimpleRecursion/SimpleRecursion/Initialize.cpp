#include <iostream>
#include <string>
#include <stack>
#include <fstream>
#include <stdexcept>
#include "Node.h"
using namespace std;

// Global variables
stack<string> stack_of_words; 
Node<string> *list_of_words; 

void initialize() {
	ifstream fin("..\\Story.txt");
	if (fin.fail()) {
		cout << "Fail to open file\n";
		throw string("Unable to initialize stack");
	}
	list_of_words = NULL;
	string word;
	while (fin >> word) {
		stack_of_words.push(word);
		list_of_words = new Node<string>(word, list_of_words);
	}
	fin.close();
}