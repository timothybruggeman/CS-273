#include "Triangle.h"
bool isTriangle(int a, int b, int c) {
	// A correct function would return true
	// if a, b, c are valid sides for a triangle, i.e.
	if (a + b > c && a + c > b && b + c > a)
	return true;
	else
	return false;
}