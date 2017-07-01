#ifndef _DINNER_PARTY_H_
#define _DINNER_PARTY_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Party.h"
#include "DinnerPartyTicket.h"

/**
* DinnerParty is derived from Party
*/
class DinnerParty : public Party
{
private:
	std::list<std::string> room; // Data structure for containing the party goers in this dinner party

	/**
	* Constructor for creating a DinnerParty
	*/
	DinnerParty() {}

	friend class PartyFactory;

public:

	/**
	* Add a person to the party
	* @param name the name of the party goer
	*/
	PartyTicket * add(std::string name) {
		/**
		*   Pseudo-code
		*    1. add name to the front of room _/
		*    2. get iterator to the front of the room (this points to the recently added party goer)
		*    3. create a new dinner party ticket (DinnerPartyTicket) with its constructor
		*            Pass to the constructor "this" party, and the iterator from step 2
		*    4. return this new party ticket 
		*/
		room.push_front(name);
		return new DinnerPartyTicket(this->Party, room.front); //Party *the_party, std::list<std::string>::iterator &me
	}

	/**
	* List all the persons currently in the party
	*/
	void list() {
		for (std::list<std::string>::iterator iterator = room.begin(), end = room.end(); iterator != end; iterator++) {
			std::cout << *iterator;
		}
		// iterate through all the persons here.
	}

	/**
	* Remove the person identified by the iterator from the party
	*/
	void remove(std::list<std::string>::iterator it) {
		room.erase (it);
		// someone's getting out of hand. Let's ask them to leave.
	}
};
#endif