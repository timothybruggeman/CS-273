#ifndef HEALTHWORKER_H_
#define HEALTHWORKER_H_

extern Random my_random;

class Healthworker {
protected:
	//Patient they are serving
	Citizen* current_patient;

	//If they are working
	bool currently_working;

	//How long they have been working on the current patient
	int working_time;

	//They last name for display purposes
	std::string last_name;

public:
	//Constructor creates arbitrary and random last name and sets other values to default
	Healthworker() {
		std::ifstream ln;
		ln.open("Last_Name.txt");
		for (int i = 0; i <= my_random.next_int(2000); i++) {
			std::cout << last_name;
		}
		working_time = 0;
		currently_working = false;
	}

	//Getters and setters
	Citizen* get_current_patient() { return current_patient; }
	bool get_currently_working() { return currently_working; }
	int get_working_time() { return working_time; }
	std::string get_last_name() { return last_name; }

	void set_current_patient(Citizen* current_patient) { this->current_patient = current_patient; }
	void set_currently_working(bool currently_working) { this->currently_working = currently_working; }
	void set_working_time(int working_time) { this->working_time = working_time; }

	//Virtual update function defined in doctor and nurse
	virtual void update() { ; }
};

#endif // !HEALTHWORKER_H_