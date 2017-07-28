#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "Hospital.h"
#include "Random.h"
#include "Visit.h"

Random my_random;

class Simulator {
private:
	//Clock for simulation to run
	int total_time;
	int clock;

	//Number of doctors, nurses, and the rate of incoming patients per hour
	int num_Doctors;
	int num_Nurses;
	double rate_of_patients;

	//The simulated hospital
	Hospital* Our_Lady_Liberty_Hospital;

	//Method copied from Simulator project
	int read_int(const std::string &prompt, int low, int high)
	{
		if (low >= high) // invalid range
			throw std::invalid_argument("invalid range specified");

		std::cin.exceptions(std::ios_base::failbit);
		int num = 0;
		while (true) {
			try {
				while (true) {
					std::cout << prompt;
					std::cin >> num;
					if (num >= low && num <= high) { // within the specified range
						std::cout << std::endl;
						return num;
					}
				}
			}
			catch (std::ios_base::failure) {
				std::cout << "Bad numeric string -- try again\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			}
		}
	}

public:
	//Constructor asks for the nessesary information to start the simulation
	Simulator() {
		num_Doctors = read_int("What is the number of doctors working at this hospital? ", 0, INT_MAX);
		num_Nurses = read_int("What is the number of nurses working at this hospital? ", 0, INT_MAX);
		rate_of_patients = read_int("What is the rate of new patients per hour at this hospital? ", 1, 59) / (double)60.0;
		total_time = read_int("How long should the simulation run (in hours)? ", 1, INT_MAX);
		Our_Lady_Liberty_Hospital = new Hospital(num_Doctors, num_Nurses);
	}

	void run_simulation()
	{
		// run the simulation
		for (clock = 0; clock < total_time; ++clock)
		{
			Our_Lady_Liberty_Hospital->update(clock, rate_of_patients);
		}
	}

	//Display the end information
	void show_stats() {
		std::cout << "Number of doctors: " << num_Doctors << std::endl;
		std::cout << "Number of nurses: " << num_Nurses << std::endl;
		std::vector<Visit> visit_list = Our_Lady_Liberty_Hospital->get_visit_list();
		std::cout << "Number of total patients served: " << visit_list.size() << std::endl;
		std::cout << "A list of visits: " << std::endl;
		for (unsigned int i = 0; i < visit_list.size(); i++) {
			std::cout << "Patient: " << visit_list[i].get_patient().get_first_name() << " " << visit_list[i].get_patient().get_last_name()
				<< "     Visit time: " << visit_list[i].get_time_of_visit()
				<< "     Illness severity (1-20): " << visit_list[i].get_illness_severity()
				<< "     Helped by: " << visit_list[i].get_healthworker().get_last_name() << std::endl;
		}
	}
};

#endif // !SIMULATOR_H_