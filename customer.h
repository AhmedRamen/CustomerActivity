#pragma once
#include <string>
#include "address.h"

struct Customer {
	int id;
	std::string name;
	std::string email;
	homeAddress address;
};

//Prints the customer's data into a console
//This gets the customer via memory.
void printCustomer(Customer& customer);

//Dynamically change where they live
inline void setCustomerAddress(Customer& address, std::string street, std::string city, short zipcode);

inline void setCustomerAddress(Customer& address, std::string street, std::string city, short zipcode) {
	address.address.street = street;
	address.address.city = city;
	address.address.zipcode = zipcode;
}

//Gets customer's street name
std::string getCustomerStreet(Customer& customer);

//Gets customer's city name
std::string getCustomerCity(Customer& customer);

//Gets customer's zip code
short getCustomerZipcode(Customer& customer);

//This really could've been written any better.
std::string getCustomerStreet(Customer& customer) {
	return customer.address.street;
}

std::string getCustomerCity(Customer& customer) {
	return customer.address.city;
}

short getCustomerZipcode(Customer& customer) {
	return customer.address.zipcode;
}