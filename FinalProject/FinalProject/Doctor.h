#ifndef DOCTOR_H_
#define DOCTOR_H_

#include "HealthWorker.h"
//#include "Random.h"

extern Random my_random;

class Doctor : public Healthworker {
private:
	//The amount of time they have been with the current patient
	int full_working_time = my_random.next_int(19) + 1;

public:
	void update() {
		//If they are currently working, update the amount of time they are working
		if (currently_working) {
			working_time++;
			//Doctors will work between 1 and 20 minutes on a patient
			if (working_time == full_working_time) {
				currently_working = false;
				working_time = 0;
				full_working_time = my_random.next_int(19) + 1;
			}
		}
	}
};

#endif // !DOCTOR_H_