#pragma once
#include <iostream>
#include <string>
#include "Medication.h"
#include "Customer.h"
#include "Adress.h"

using namespace std;
class Pharmacy
{
protected:
	const int id_;
	static int count_;
	string pharmacyName_;
	Medication medications_[50];
	Customer customers_[50];
	int medCount;
	int custCount;
public:
	Pharmacy();
	Pharmacy(string);
	void setPharmacyName(string);
	string getPharmacyName();
	const int getID();
	int getMedID();
	int getCusID();
	void addMedication(Medication&);
	void addCustomers(Customer&);
	void removeMedication(int);
	void displayMedications();
	void displayCustomers();

};

