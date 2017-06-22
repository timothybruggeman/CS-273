#ifndef DIVISIBLEBY_H_
#define DIVISIBLEBY_H_

class DivisibleBy {
private:
	int factor;
public:
	DivisibleBy(int d) : factor(d) {}

	bool operator()(int val) {
		return (val % factor == 0); // true if mod returns zero, i.e. val has the factor
	}
};

#endif