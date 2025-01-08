#include <iostream>
#include "Pharmacy.h"
using namespace std;

int main() {
    const int MAX_PHARMACIES = 10;
    Pharmacy pharmacies[MAX_PHARMACIES];
    int pharmCount = 0;
    int choice;
    do {
        cout << "\nPharmacy Management System Menu --> "<<pharmCount<<":\n";
        cout << "1. Add Medication\n";
        cout << "2. Add Customer\n";
        cout << "3. Display Medications\n";
        cout << "4. Display Customers\n";
        cout << "5. Go To The Next Pharmacy\n";
        cout << "6. Exit\n";
        cout << "7. Remove Medication\n";
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
            cin.ignore();
            getline(cin,description);
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
            string customerName;
            string phoneNum;
            string email;
            string city;
            string streetName;
            cout << "Enter Customer Name: " << endl;
            cin >> customerName;
            cout << "Enter Customer Phone Number: " << endl;
            cin >> phoneNum;
            cout << "Enter Customer Address Details: " << endl;
            cout << "1--> Email:\t";
            cin >> email;
            cout << "\n2--> City:\t";
            cin.ignore();
            getline(cin, city);
            cout << "\n3--> Street Name:\t";
            cin.ignore();
            getline(cin, streetName);
            Address ad(email, city, streetName);
            Customer temp(customerName, phoneNum, ad);
            pharmacies[pharmCount].addCustomers(temp);
        }
        else if (choice == 3) {
            pharmacies[pharmCount].displayMedications();
        }
        else if (choice == 4) {
            pharmacies[pharmCount].displayCustomers();
        }
        else if (choice == 5) {
            pharmCount++;
        }
        else if (choice == 6) {
            break;
        }
        else if (choice == 7) {
            int num;
            cout << "Choose The Number of Medication that you need to remove: " << endl;
            cin >> num;
            pharmacies[pharmCount].removeMedication(num);
        }
        else {
            cout << "Error. Please Enter A Valid Choice:" << endl;
            cin >> choice;
        }
    } while (pharmCount != MAX_PHARMACIES);
    return 0;
}