#include "Customer.h"
int Customer::counter = 0;
Customer::Customer() : customerID_(++counter) {
	customerName_ = "No Name provided.";
	phoneNum_ = "No PhoneNumber provided.";
	address_ = "No Adress provided.";
}
Customer::Customer(string name, string phone, string address) : customerID_(++counter){
	setCustomerName(name);
	setPhoneNum(phone);
	setAddress(address);
}
void Customer::setCustomerName(string name) {
	if (name.length() > 1) {
		customerName_ = name;
	}
	else{
		cout << "please provide a valid name." << endl;
		customerName_ = "No Name provided.";
	}
}
void Customer::setPhoneNum(string phone) {
	if (phone.length() <= 10 && phone.length() > 0) {
		phoneNum_ = phone;
	}
	else {
		cout << "please provide a valid PhoneNumber." << endl;
		phoneNum_ = "No Phone provided.";
	}
}
void Customer::setAddress(string address) {
	if (address.length() > 1) {
		address_ = address;
	}
	else {
		cout << "please provide a valid adress." << endl;
		customerName_ = "No adress provided.";
	}
}
string Customer::getCustomerName() {
	return customerName_;
}
int Customer::getCustomerID() {
	return customerID_;
}
string Customer::getPhoneNum() {
	return phoneNum_;
}
string Customer::getAddress() {
	return address_;
}
void Customer::printData() {
	cout << "Here is this customer's data:\n"
		<< "Name: " << getCustomerName() << "\n"
		<< "ID: " << getCustomerID() << "\n"
		<< "Phone Number: " << getPhoneNum() << "\n"
		<< "Address: " << getAddress() << "\n";
}