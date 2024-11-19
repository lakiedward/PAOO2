// Booking.cpp
#include "Booking.h"
#include <iostream>

// Constructor - inițializare membri
Booking::Booking(const std::string& name, int nights) 
    : customerName(new std::string(name)), nights(nights) {}

// Destructor - eliberarea memoriei
Booking::~Booking() {
    delete customerName;
}

// Copy constructor - copiere profundă a datelor
Booking::Booking(const Booking& other) 
    : customerName(new std::string(*other.customerName)), nights(other.nights) {}

// Move constructor - mutarea resursei
Booking::Booking(Booking&& other) noexcept 
    : customerName(other.customerName), nights(other.nights) {
    other.customerName = nullptr; // Prevenim de-alocarea dublă
}

// Metodă pentru afișarea detaliilor rezervării
void Booking::printDetails() const {
    if (customerName) {
        std::cout << "Customer Name: " << *customerName << ", Nights: " << nights << std::endl;
    } else {
        std::cout << "No booking information available." << std::endl;
    }
}
