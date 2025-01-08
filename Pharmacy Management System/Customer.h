#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include "Adress.h"
using namespace std;

class Customer
{
private:
	string customerName_;
	int customerID_;
	static int counter;
	string phoneNum_;
	Address address_;
public:
	Customer();
	Customer(string,string,Address);
	void setCustomerName(string);
	void setPhoneNum(string);
	void setAddress(string,string,string);
	string getCustomerName();
	int getCustomerID();
	string getPhoneNum();
	Address getAddress();
	void printData();
};
#endif // !CUSTOMER_H



