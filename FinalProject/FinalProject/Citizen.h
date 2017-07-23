#ifndef CITIZEN_H_
#define CITIZEN_H_

extern Random my_random;

class Citizen {
private:
	std::string first_name;
	std::string last_name;
	int priority;

public:
	//Constructor calls random citizen
	Citizen() {
		int random_citizen = my_random.next_int(2000);
		std::ifstream fn;
		fn.open("First_Name.txt");
		for (int i = 0; i <= random_citizen; i++) {
			std::cout << first_name;
		}
		std::ifstream ln;
		ln.open("Last_Name.txt");
		for (int i = 0; i <= random_citizen; i++) {
			std::cout << last_name;
		}
	}

	//Overloaded < sign for priority queue
	bool operator<(const Citizen &other) const {
		if (this->priority <= other.priority)
			return true;
		else return false;
	}

	//Getters and setters
	std::string get_first_name() { return first_name; }
	std::string get_last_name() { return last_name; }
	int get_priority() { return priority; }

	void set_first_name(std::string first_name) { this->first_name = first_name; }
	void set_last_name(std::string last_name) { this->last_name = last_name; }
	void set_priority(int priority) { this->priority = priority; }
};

#endif // !CITIZEN_H_