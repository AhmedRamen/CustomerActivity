#include <iostream>
#include "customer.h"

void printCustomer(Customer& customer) {
	//Inherently, this goes down to just std::cout << "Customer ID: " << customer.id << std::endl << "Name: " << customer.name << std::endl << "Email Address: " << customer.email << std::endl; in compiler
	std::cout
		<< "Customer ID: " << customer.id << std::endl
		<< "Name: " << customer.name << std::endl
		<< "Email Address: " << customer.email << std::endl
		<< "Home Address: " << std::endl
		<< getCustomerStreet(customer) << std::endl
		<< getCustomerCity(customer) << ", " << getCustomerZipcode(customer) << std::endl;
}

int main() {
	//Create customer
	Customer customer;
	//Assign data to customer
	customer.id = 19243;
	customer.name = "Joe Biden";
	customer.email = "president@whitehouse.gov";
	setCustomerAddress(customer, "1600 Pennsylvania Avenue NW", "Washington, DC", 20500);
	printCustomer(customer);
}
