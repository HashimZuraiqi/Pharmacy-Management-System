#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
	string customerName_;
	const int customerID_;
	string phoneNum_;
	string address_;
public:
	Customer();
	Customer(string,int,string, string);
	void setCustomerName(string);
	void setPhoneNum(string);
	void setAddress(string);
	string getCustomerName();
	int getCustomerID() const;
	string getPhoneNum();
	string getAddress();
	void printData();
};
#endif // !CUSTOMER_H



