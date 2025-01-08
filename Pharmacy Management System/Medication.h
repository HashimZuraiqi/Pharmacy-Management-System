#ifndef MEDICATION_H
#define MEDICATION_H
#include<iostream>
#include<string>
using namespace std;
class Medication
{
private:
	string medicationName_;
	string description_;
	double price_;
	int quantityInStock_;
	int expiryDate_;
	string barcode_;
public:
	Medication();
	Medication(string, string, double, int, int, string);
	void setMedicationName(string);
	void setDescription(string);
	void setPrice(double);
	void setQuantity(int);
	void setExpiry(int);
	void setBrcode(string);
	string getMedication();
	string getDescription();
	double getPrice();
	int getQuantity();
	int getExpiry();
	string getBarcode();
	void printData();
};

#endif // !MEDICATION_H



