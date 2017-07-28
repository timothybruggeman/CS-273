#ifndef HOSPITAL_H_
#define HOSPITAL_H_

#include "Citizen.h"
#include "Doctor.h"
#include "Nurse.h"
//#include "Random.h"
#include "Visit.h"

extern Random my_random;

class Hospital {
private:
	//Two priority queues: high_priority is for patients priority 11 to 20, low_priority is for patients priority 1 to 10
	std::priority_queue<Citizen> high_priorty_citizen_queue;
	std::priority_queue<Citizen> low_priorty_citizen_queue;

	//Queue for doctors and nurses
	std::vector<Doctor> doctor_list;
	int doctor_list_iterator = -1;
	std::vector<Nurse> nurse_list;
	int nurse_list_iterator = -1;

	//List of all visits
	std::vector<Visit> visit_list;

public:
	//Constructor makes vectors of the correct size for the doctors and nurses
	Hospital() { ; }
	Hospital(int doctor_list_size, int nurse_list_size) {
		for (int i = 0; i < doctor_list_size; i++) {
			Doctor Zoidberg;
			doctor_list.push_back(Zoidberg);
		}
		for (int i = 0; i < nurse_list_size; i++) {
			Nurse Ratchet;
			nurse_list.push_back(Ratchet);
		}
	}

	//Getters
	Citizen get_priority_patient() { return high_priorty_citizen_queue.top(); }
	Citizen get_low_priority_patient() { return low_priorty_citizen_queue.top(); }

	Doctor get_doctor(bool next_doctor) {
		if (next_doctor) { 
			doctor_list_iterator++; 
			doctor_list_iterator = doctor_list_iterator % doctor_list.size(); 
		}
		return doctor_list[doctor_list_iterator];
	}
	Nurse get_nurse(bool next_nurse) {
		if (next_nurse) { 
			nurse_list_iterator++; 
			nurse_list_iterator = doctor_list_iterator % doctor_list.size(); 
		}
		return nurse_list[nurse_list_iterator];
	}
	std::vector<Visit> get_visit_list() {
		return visit_list;
	}

	//Update the hosptial for the simulation
	void update(int clock, int rate_of_patients) {
		//Chooses if a new citizen needs to be a patient
		if (my_random.next_double() < rate_of_patients) {
			Citizen Snips;

			//Choose an illness severity/priority
			int illness_severity;
			if (my_random.next_int(9) < 7) { illness_severity = my_random.next_int(9) + 1; }
			else if (my_random.next_int(2) < 2) { illness_severity = my_random.next_int(4) + 11; }
			else { illness_severity = my_random.next_int(4) + 16; }
			if (illness_severity > 10) { Snips.set_priority(illness_severity); high_priorty_citizen_queue.push(Snips); }
			else { Snips.set_priority(illness_severity); low_priorty_citizen_queue.push(Snips); }
		}

		//Checks if there is anyone in the high priority queue and any doctors available
		while (!high_priorty_citizen_queue.empty() && !get_doctor(false).get_currently_working()) {

			//Get the highest priority patient
			Citizen Kane = get_priority_patient();

			//Give the patient a doctor
			get_doctor(false).set_current_patient(&Kane);

			//Record this visit
			Visit visit(Kane, clock, Kane.get_priority(), get_doctor(false));
			visit_list.push_back(visit);

			//Update doctor to working
			get_doctor(false).set_currently_working(true);

			//Remove patient from the queue
			high_priorty_citizen_queue.pop();
			
			//Move on the next doctor
			get_doctor(true);
		}

		//Checks if there is anyone in the low priority queue and any nurses availble then follows the same procedure as before
		while (!low_priorty_citizen_queue.empty() && !get_nurse(false).get_currently_working()) {
			Citizen Kane = get_low_priority_patient();
			get_nurse(false).set_current_patient(&Kane);
			Visit visit(Kane, clock, Kane.get_priority(), get_nurse(false));
			visit_list.push_back(visit);
			get_nurse(false).set_currently_working(true);
			high_priorty_citizen_queue.pop();
			get_nurse(true);
		}

		//Checks if there is anyone in the low priority queue and any doctors availble then follows the same procedure as before
		while (!low_priorty_citizen_queue.empty() && !get_doctor(false).get_currently_working()) {
			Citizen Kane = get_low_priority_patient();
			get_doctor(false).set_current_patient(&Kane);
			Visit visit(Kane, clock, Kane.get_priority(), get_doctor(false));
			visit_list.push_back(visit);
			get_doctor(false).set_currently_working(true);
			high_priorty_citizen_queue.pop();
			get_doctor(true);
		}

		//Updates all the healthworkers, increasing the amount of time they have been working
		for (unsigned int i = 0; i < doctor_list.size(); i++) {
			doctor_list[i].update();
		}
		for (unsigned int i = 0; i < nurse_list.size(); i++) {
			nurse_list[i].update();
		}
	}
};

#endif // !HOSPITAL_H_