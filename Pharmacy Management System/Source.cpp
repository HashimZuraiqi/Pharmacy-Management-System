#include <iostream>
#include <vector>
#include "Pharmacy.h"
using namespace std;

int main() {
    const int MAX_PHARMACIES = 10;
    Pharmacy pharmacies[MAX_PHARMACIES];
    int pharmCount = 0;
    int choice;
    do {
        cout << "\nPharmacy Management System Menu:\n";
        cout << "1. Add Medication\n";
        cout << "2. Add Customer\n";
        cout << "3. Display Medications\n";
        cout << "4. Display Customers\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            string medicationName;
            string description;
            double price;
            int quantityInStock;
            int expiryDate;
            string barcode;
            cout << "Enter Medication Name: " << endl;
            cin >> medicationName;
            cout << "Enter Medication Description: " << endl;
            cin >> description;
            cout << "Enter Medication Price: " << endl;
            cin >> price;
            cout << "Enter Medication Quatnity: " << endl;
            cin >> quantityInStock;
            cout << "Enter Medication Expiry Date: " << endl;
            cin >> expiryDate;
            cout << "Enter Medication Barcode: " << endl;
            cin >> barcode;
            Medication temp(medicationName, description, price, quantityInStock, expiryDate, barcode);
            pharmacies[pharmCount].addMedication(temp);
        }
        else if (choice == 2) {

        }
    } while (pharmCount != MAX_PHARMACIES);
    return 0;
}