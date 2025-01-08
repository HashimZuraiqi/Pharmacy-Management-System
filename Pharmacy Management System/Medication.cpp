#include "Medication.h"

// Default constructor
Medication::Medication()
    : medicationName_("No Name provided."), description_("No Description provided."),
    price_(0.0), quantityInStock_(0), expiryDate_(0), barcode_("No Barcode provided.") {
}

// Parameterized constructor
Medication::Medication(string name, string description, double price, int quantityInStock, int expiryDate, string barcode) {
    setMedicationName(name);
    setDescription(description);
    setPrice(price);
    setQuantity(quantityInStock);
    setExpiry(expiryDate);
    setBrcode(barcode);
}

// Setter for medication name
void Medication::setMedicationName(string name) {
    if (name.length() > 1) {
        medicationName_ = name;
    }
    else {
        cout << "Error: Please provide a valid medication name." << endl;
        medicationName_ = "No Name provided.";
    }
}

// Setter for description
void Medication::setDescription(string description) {
    if (description.length() > 1) {
        description_ = description;
    }
    else {
        cout << "Error: Please provide a valid description." << endl;
        description_ = "No Description provided.";
    }
}

// Setter for price
void Medication::setPrice(double price) {
    if (price >= 0.0) {
        price_ = price;
    }
    else {
        cout << "Error: Price cannot be negative." << endl;
        price_ = 0.0;
    }
}

// Setter for quantity in stock
void Medication::setQuantity(int quantityInStock) {
    if (quantityInStock >= 0) {
        quantityInStock_ = quantityInStock;
    }
    else {
        cout << "Error: Quantity in stock cannot be negative." << endl;
        quantityInStock_ = 0;
    }
}

void Medication::setExpiry(int expiryDate) {
    if (expiryDate >= 20250101 && expiryDate <= 20991231) {
        expiryDate_ = expiryDate;
    }
    else {
        cout << "Error: Please provide a valid expiry date (YYYYMMDD format)." << endl;
        expiryDate_ = 0;
    }
}

void Medication::setBrcode(string barcode) {
    if (barcode.length() > 1) {
        barcode_ = barcode;
    }
    else {
        cout << "Error: Please provide a valid barcode." << endl;
        barcode_ = "No Barcode provided.";
    }
}

string Medication::getMedication() {
    return medicationName_;
}

string Medication::getDescription() {
    return description_;
}

double Medication::getPrice() {
    return price_;
}

int Medication::getQuantity() {
    return quantityInStock_;
}

int Medication::getExpiry() {
    return expiryDate_;
}

string Medication::getBarcode() {
    return barcode_;
}

void Medication::printData() {
    cout << "Here is this medication's data:\n"
        << "Name: " << getMedication() << "\n"
        << "Description: " << getDescription() << "\n"
        << "Price: $" << getPrice() << "\n"
        << "Quantity in Stock: " << getQuantity() << "\n"
        << "Expiry Date: " << getExpiry() << "\n"
        << "Barcode: " << getBarcode() << "\n";
}