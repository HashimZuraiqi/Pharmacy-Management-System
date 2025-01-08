#include "Adress.h"

Address::Address(){
	setEmail("@nothing");
	setCity("No City Provided.");
	setStreet("No Street Provided.");
}
Address::Address(string email, string city, string street) {
	setEmail(email);
	setCity(city);
	setStreet(street);
}
void Address::setEmail(string email) {
	email_ = email;
}
void Address::setCity(string city) {
	city_ = city;
}
void Address::setStreet(string street) {
	streetName_ = street;
}
string Address::getCity() {
	return city_;
}
string Address::getEmail() {
	return email_;
}
string Address::getStreet() {
	return streetName_;
}
void Address::printData() {
	cout << "Email: " << getEmail()
		 << "\nCity: " << getCity()
		 << "\nStreet: " << getStreet() << endl;
}