#pragma once
#include <iostream>
#include <string>
#include "Medication.h"
#include "Customer.h"

using namespace std;
class Pharmacy
{
protected:
	const int id_;
	static int count_;
	string pharmacyName_;
	Medication medications_[50];
	Customer customers_[50];
public:
	Pharmacy(string);
	void addMedication(Medication&);
	void removeMedication(Medication&);
	void displayMedications();
	void displayCustomers();
};

