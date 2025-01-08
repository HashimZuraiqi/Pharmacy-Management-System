#include "Pharmacy.h"
int Pharmacy::count_ = -1;

Pharmacy::Pharmacy(string name) : id_(++count_), medCount(0), custCount(0) {
	setPharmacyName(name);
}
Pharmacy::Pharmacy() : id_(++count_), medCount(0), custCount(0) {
	setPharmacyName("No Name.");
}
string Pharmacy::getPharmacyName() {
	return pharmacyName_;
}
const int Pharmacy::getID() {
	return id_;
}
void Pharmacy::setPharmacyName(string name) {
	pharmacyName_ = name;
}
int Pharmacy::getMedID() {
	return medCount;
}
int Pharmacy::getCusID(){
	return custCount;
}
void Pharmacy::addMedication(Medication& m) {
	if (medCount < 50) {
		medications_[medCount] = m;
		medCount++;
	}
	else {
		cout << "Reached The Maximum Size." << endl;
	}
}
void Pharmacy::removeMedication(int medID) {
	for (int i = 0; i < medCount; i++) {
		if (getMedID() == medID) {
			for (int j = i; j < medCount - 1; j++) {
				medications_[i] = medications_[j + 1];
			}
			medCount--;
			cout << "Medication removed successfully." << endl;
		}
		else{
			cout << "The Needed Medication Can't be found." << endl;
		}
	}
}
void Pharmacy::addCustomers(Customer& c) {
	if (custCount < 50) {
		customers_[custCount] = c;
		custCount++;
	}
	else {
		cout << "Reached The Maximum Size." << endl;
	}

}
void Pharmacy::displayMedications() {
	for (int i = 0; i < medCount; i++) {
		cout << "======================" << endl;
		cout << "Medication (" << i + 1 << "):" << endl;
		medications_[i].printData();
		cout << "======================" << endl;
	}
}
void Pharmacy::displayCustomers() {
	for (int i = 0; i < custCount; i++) {
		cout << "======================" << endl;
		cout << "Medication (" << i + 1 << "):" << endl;
		customers_[i].printData();
		cout << "======================" << endl;
	}
}