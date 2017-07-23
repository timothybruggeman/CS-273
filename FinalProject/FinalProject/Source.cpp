//Aw man, that is a lot of inclusions

#include <iostream>
#include <queue>
#include <string>
#include <fstream>

#include "Random.h"
#include "Citizen.h"
#include "Doctor.h"
#include "HealthWorker.h"
#include "Hospital.h"
#include "Nurse.h"
#include "Simulator.h"
#include "Visit.h"

void main() {
	//Add data for simulation
	Simulator simulation;

	//Run simulation
	simulation.run_simulation();

	//Display end data
	simulation.show_stats();
}