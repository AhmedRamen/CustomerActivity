#include <iostream>
#include "customer.h"

void printCustomer(Customer& customer) {
	//Inherently, this goes down to just std::cout << "Customer ID: " << customer.id << std::endl << "Name: " << customer.name << std::endl << "Email Address: " << customer.email << std::endl; in compiler
	std::cout 
		<< "Customer ID: " << customer.id	   << std::endl
		<< "Name: " << customer.name		   << std::endl
		<< "Email Address: " << customer.email << std::endl;
}

int main() {
	//Create customer
	Customer customer;
	//Assign data to customer
	customer.id = 19243;
	customer.name = "Jass";
	customer.email = "ciniw77441@jameagle.com";
	printCustomer(customer);
}
