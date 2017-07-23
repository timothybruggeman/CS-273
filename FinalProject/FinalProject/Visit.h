#ifndef VISIT_H_
#define VISIT_H_

class Visit {
private:
	//Who is being treated
	Citizen patient;

	//When were they treated
	int time_of_visit;

	//How much was the patient injured
	int illness_severity;

	//Who treated the patient
	Healthworker healthworker;

public:
	//Constructor fills in all of the visit information
	Visit(Citizen patient, int time_of_visit, int illness_severity, Healthworker healthworker) {
		this->patient = patient;
		this->time_of_visit = time_of_visit;
		this->illness_severity = illness_severity;
		this->healthworker = healthworker;
	}

	//Getters and setters
	Citizen get_patient() { return patient; }
	int get_time_of_visit() { return time_of_visit; }
	int get_illness_severity() { return illness_severity; }
	Healthworker get_healthworker() { return healthworker; }

	void set_patient(Citizen patient) { this->patient = patient; }
	void set_time_of_visit(int time_of_visit) { this->time_of_visit = time_of_visit; }
	void set_illness_severity(int illness_severity) { this->illness_severity = illness_severity; }
	void set_healthworker(Healthworker healthworker) { this->healthworker = healthworker; }
};

#endif // !VISIT_H_