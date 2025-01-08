#pragma once
#include <iostream>
#include<string>
using namespace std;
class Address
{
protected:
	string email_;
	string city_;
	string streetName_;
public:
	Address();
	Address(string, string, string);

	void setEmail(string);
	void setCity(string);
	void setStreet(string);
	string getEmail();
	string getCity();
	string getstreet();

	void printData();
};

