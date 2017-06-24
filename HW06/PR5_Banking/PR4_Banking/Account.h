#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <vector>
#include <sstream>
#include "Customer.h"
#include "Transaction.h"

/**
The Bank has Accounts and an Account belongs to a Customer.
Additionally, there are specialized types of accounts: Checking_Account and Savings_Account.
Checking_Account and Savings_Account have specialized ways of adding interest, and describing itself.

@author: Ed Walker
*/

class Account {
protected:
	Customer *customer;		// The customer who owns this account
	double balance;			// The available balance in this account
	int account_number;		// A unique number identifying this account
	std::vector<Transaction *> transactions;  // The record of transactions that have occured with this account

	/**
	Describe fees associated with the customer who owns this account.
	The fee will depend on the specific type of customer.
	@return string showing checking and overdraft fees
	*/
	std::string get_fees()
	{
		int overdraft, charge;

		overdraft = customer->OVERDRAFT_PENALTY;
		charge = customer->CHECK_CHARGE;

		std::stringstream ss;
		ss << "Check Charge: " << charge << " Overdraft Fee: " << overdraft;
		return ss.str();
	}

//protected:
	/**
	Add interest based on a specified interest rate to account
	@param interest	The interest rate
	*/
	void add_interest(double interest) {
		double amt = balance*interest;
		balance = balance + amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(customer->get_customer_number(), "deposit", amt, fees); //(int customer_number, std::string type, double amt, std::string fees);
		transactions.push_back(tran);
	}

public:
	Account() { *customer = NULL; balance = NULL; account_number = NULL; }
	/**
	Constructor requires a customer to create an account
	Balance always starts with 0 when account is created.
	*/
	Account(Customer *cust, int id) : customer(cust), account_number(id), balance(0) {}

	/**
	Generic accesser and setter methods for properties customer, balance, and account_number
	*/

	Customer *get_customer() {
		return customer;
	}

	void set_customer(Customer *cust) {
		customer = cust;
	}

	int get_account() {
		return account_number;
	}

	void set_balance(double new_balance) {
		balance = new_balance;
	}

	void set_account(int account_number) {
		this->account_number = account_number;
	}

	double get_balance() {
		return balance;
	}

	/**
	Generic method describing the account information.

	Remember that you will need to indicate if an account is Savings or Checking in 
	an overridden version of to_string() in the derived classes. 

	@return string describing generic information about the account
	*/
	virtual std::string to_string() {
		std::stringstream ss; // for composing the string that describes this account		

		ss << "  Name: " << customer->get_name()
		<< "\n  Address: " << customer->get_address()
		<< "\n  Age: " << customer->get_age()
		<< "\n  Telephone number: " << customer->get_telephone_number()
		<< "\n  Customer number: " << customer->get_customer_number()
		<< "\n  Balance: " << balance
		<< "\n  Account ID: " << account_number << std::endl;
		return ss.str();
	}

	/**
	Deposits amount into account
	@param amt The deposit amount
	*/
	virtual void deposit(double amt) {
		balance += amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(customer->get_customer_number(), "deposit", amt, fees);

		transactions.push_back(tran);
	}

	/**
	Withdraws amount from account
	@param amt The withdrawal amount
	*/
	virtual void withdraw(double amt) {
		balance -= amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(customer->get_customer_number(), "withdraw", amt, fees);

		transactions.push_back(tran);
	}

	// We want the Savings_Account and Checking_Account to implement this.
	virtual void add_interest() = 0;

};

class Savings_Account : public Account {
Savings_Account() {
*customer = NULL;
balance = NULL;
account_number = NULL;
}
Savings_Account(Customer *cust) {
	*customer = *cust;
	balance = 0;
	account_number = NULL;
}

std::string to_string() {
	std::stringstream ss; // for composing the string that describes this account		

	ss << "  Name: " << customer->get_name()
		<< "\n  Address: " << customer->get_address()
		<< "\n  Age: " << customer->get_age()
		<< "\n  Telephone number: " << customer->get_telephone_number()
		<< "\n  Customer number: " << customer->get_customer_number()
		<< "\n  Balance: " << balance
		<< "\n  Account ID: " << account_number << std::endl;
	return ss.str();
}

void deposit(double amt) {
	balance += amt;
	std::string fees = get_fees();
	Transaction *tran = new Transaction(customer->get_customer_number(), "deposit", amt, fees);

	transactions.push_back(tran);
}

void withdraw(double amt) {
	balance -= amt;
	std::string fees = get_fees();
	Transaction *tran = new Transaction(customer->get_customer_number(), "withdraw", amt, fees);

	transactions.push_back(tran);
}
};

class Checking_Account : public Account {
Checking_Account() {
*customer = NULL;
balance = NULL;
account_number = NULL;
}
Checking_Account(Customer *cust) {
	*customer = *cust;
	balance = 0;
	account_number = NULL;
}

virtual std::string to_string() {
	std::stringstream ss; // for composing the string that describes this account		

	ss << "  Name: " << customer->get_name()
		<< "\n  Address: " << customer->get_address()
		<< "\n  Age: " << customer->get_age()
		<< "\n  Telephone number: " << customer->get_telephone_number()
		<< "\n  Customer number: " << customer->get_customer_number()
		<< "\n  Balance: " << balance
		<< "\n  Account ID: " << account_number << std::endl;
	return ss.str();
}

void deposit(double amt) {
	balance += amt;
	std::string fees = get_fees();
	Transaction *tran = new Transaction(customer->get_customer_number(), "deposit", amt, fees);

	transactions.push_back(tran);
}

void withdraw(double amt) {
	balance -= amt;
	std::string fees = get_fees();
	Transaction *tran = new Transaction(customer->get_customer_number(), "withdraw", amt, fees);

	transactions.push_back(tran);
}
};

#endif