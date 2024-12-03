#include "Booking.h"
#include <iostream>

// Constructor inițializare membri
Booking::Booking(const std::string& name, int nights) 
    : customerName(new std::string(name)), nights(nights), optionalNights(std::nullopt) {
    std::cout << "Booking created for: " << name << std::endl;
}

// Constructor implicit
Booking::Booking() : customerName(nullptr), nights(0), optionalNights(std::nullopt) {
    std::cout << "Default Booking created." << std::endl;
}

// Destructor pentru eliberarea memoriei alocate dinamic
Booking::~Booking() {
    delete customerName;
    std::cout << "Booking destroyed." << std::endl;
}

// Constructor de copiere
Booking::Booking(const Booking& other) 
    : customerName(new std::string(*other.customerName)), nights(other.nights), optionalNights(other.optionalNights) {
    std::cout << "Booking copied." << std::endl;
}

// Constructor de mutare
Booking::Booking(Booking&& other) noexcept 
    : customerName(other.customerName), nights(other.nights), optionalNights(std::move(other.optionalNights)) {
    other.customerName = nullptr; // Prevenim dublarea eliberării memoriei
    std::cout << "Booking moved." << std::endl;
}

// Operator de atribuire (Item 10, 11, 12)
Booking& Booking::operator=(const Booking& other) {
    if (this == &other) { // Item 11: Gestionăm auto-atribuirea
        return *this;
    }

    // Ștergem resursele existente
    delete customerName;

    // Item 12: Copiem toate părțile relevante ale obiectului
    customerName = other.customerName ? new std::string(*other.customerName) : nullptr;
    nights = other.nights;
    optionalNights = other.optionalNights;

    // Item 10: Returnăm o referință la *this
    return *this;
}

// Metodă pentru setarea optionalNights
void Booking::setOptionalNights(int n) {
    optionalNights = n;
}

// Metodă pentru afișarea valorii optionalNights
void Booking::printOptionalNights() const {
    if (optionalNights.has_value()) {
        std::cout << "Optional Nights: " << *optionalNights << std::endl;
    } else {
        std::cout << "Nights not set." << std::endl;
    }
}

// Metodă pentru afișarea detaliilor rezervării
void Booking::printDetails() const {
    if (customerName) {
        std::cout << "Customer Name: " << *customerName << ", Nights: " << nights << std::endl;
    } else {
        std::cout << "No booking information available." << std::endl;
    }
}
