#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer {
protected:
	std::string name;
	std::string address;
	int age;
	int telephone_number;
	int customer_number;

	double SAVINGS_INTEREST;
	double CHECK_INTEREST;
	double CHECK_CHARGE;
	double OVERDRAFT_PENALTY;

public:
	Customer() {
		name = "";
		address = "";
		age = 0;
		telephone_number = 0;
		customer_number = 0;
	}

	std::string get_name() {
		return name;
	}
	std::string get_address() {
		return address;
	}
	int get_age() {
		return age;
	}
	int get_telephone_number() {
		return telephone_number;
	}
	int get_customer_number() {
		return customer_number;
	}
	void set_name(std::string Name) {
		name = Name;
	}
	void set_address(std::string Address) {
		address = Address;
	}
	void set_age(int Age) {
		age = Age;
	}
	void set_telephone_number(int Telephone_Number) {
		telephone_number = Telephone_Number;
	}
	void set_customer_number(int Customer_Number) {
		customer_number = Customer_Number;
	}

};


class Senior : public Customer {
	Senior() {
		SAVINGS_INTEREST = 0.011;
		CHECK_INTEREST = 0.001;
		CHECK_CHARGE = 0.250;
		OVERDRAFT_PENALTY = 6.000;
	}
	Senior(std::string name, std::string address, std::string telephone, int age) {
		this name->name;
		this address->address;
		this telephone->telephone;
		this age->age;
	}
};

class Adult : public Customer {
public:
	Adult() {
		SAVINGS_INTEREST = 0.009;
		CHECK_INTEREST = 0.001;
		CHECK_CHARGE = 0.150;
		OVERDRAFT_PENALTY = 16.000;
	}
	Adult(std::string name, std::string address, std::string telephone, int age) {
		this name->name;
		this address->address;
		this telephone->telephone;
		this age->age;
	}
};

class Student : public Customer {
public:
	Student() {
		{
			SAVINGS_INTEREST = 0.015;
			CHECK_INTEREST = 0.002;
			CHECK_CHARGE = 0.150;
			OVERDRAFT_PENALTY = 16.000;
		}
	}
	Student(std::string name, std::string address, std::string telephone, int age) {
		this name->name;
		this address->address;
		this telephone->telephone;
		this age->age;
	}
};

#endif