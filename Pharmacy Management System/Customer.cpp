#include "Customer.h"
int Customer::counter = 0;
Customer::Customer() : customerID_(++counter) {
	customerName_ = "No Name provided.";
	phoneNum_ = "No PhoneNumber provided.";
	address_.setCity("No City Provided.");
	address_.setEmail("No Email Provided.");
	address_.setStreet("No Street Provided.");
}
Customer::Customer(string name, string phone, Address address) : customerID_(++counter) , address_(address){
	setCustomerName(name);
	setPhoneNum(phone);
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
void Customer::setAddress(string email,string city , string streetName) {
	address_.setCity(city);
	address_.setEmail(email);
	address_.setStreet(streetName);
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
Address Customer::getAddress() {
	return address_;
}
void Customer::printData() {
	cout << "Here is this customer's data:\n"
		<< "Name: " << getCustomerName() << "\n"
		<< "ID: " << getCustomerID() << "\n"
		<< "Phone Number: " << getPhoneNum() << "\n"
		<< "Address: " << address_.getCity() << "\t" << address_.getEmail() << '\t' << address_.getStreet() << '\n';
}