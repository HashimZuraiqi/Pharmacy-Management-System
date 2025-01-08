#include "Customer.h"
Customer::Customer() :customerID_(-1){
	customerName_ = "No Name provided.";
	phoneNum_ = "No PhoneNumber provided.";
	adress_ = "No Adress provided.";
}
Customer::Customer(string name, int id, string phone, string adress): customerID_(id){
	setCustomerName(name);
	setPhoneNum(phone);
	setAdress(adress);
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
void Customer::setAdress(string adress) {
	if (adress.length() > 1) {
		adress_ = adress;
	}
	else {
		cout << "please provide a valid adress." << endl;
		customerName_ = "No adress provided.";
	}
}
string Customer::getCustomerName() {
	return customerName_;
}
int Customer::getCustomerID() const {
	return customerID_;
}
string Customer::getPhoneNum() {
	return phoneNum_;
}
string Customer::getAdress() {
	return adress_;
}
void Customer::printData() {
	cout << "Here is this customer data:" << endl;
	cout << "Name: " << getCustomerName() << endl;
	cout << "ID: " << getCustomerID() << endl;
	cout << "Phone Number: " << getPhoneNum() << endl;
	cout << "Adress: " << getAdress() << endl;
}