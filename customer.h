#pragma once
#include <string>

struct Customer {
	int id;
	std::string name;
	std::string email;
};

//Prints the customer's data into a console
//This gets the customer via memory.
void printCustomer(Customer& customer);