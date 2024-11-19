#include "Booking.h"
#include <iostream>

// Constructor - inițializare membri
Booking::Booking(const std::string& name, int nights) 
    : customerName(new std::string(name)), nights(nights), optionalNights(std::nullopt) {
    // Exemplu pentru Item 4: Inițializare sigură cu std::nullopt
    std::cout << "Booking created for: " << name << std::endl;
}

// Constructor implicit pentru siguranță (Item 4)
Booking::Booking() : customerName(nullptr), nights(0), optionalNights(std::nullopt) {
    // Garantează inițializarea completă a obiectului
    std::cout << "Default Booking created." << std::endl;
}

// Destructor - eliberarea memoriei
Booking::~Booking() {
    delete customerName; // Exemplu pentru eliberarea heap-ului (cerința 4)
    std::cout << "Booking destroyed." << std::endl;
}

// Copy constructor - copiere profundă
Booking::Booking(const Booking& other) 
    : customerName(new std::string(*other.customerName)), nights(other.nights), optionalNights(other.optionalNights) {
    std::cout << "Booking copied." << std::endl;
}

// Move constructor - transferul resursei
Booking::Booking(Booking&& other) noexcept 
    : customerName(other.customerName), nights(other.nights), optionalNights(std::move(other.optionalNights)) {
    other.customerName = nullptr; // Prevenim dublarea eliberării memoriei
    std::cout << "Booking moved." << std::endl;
}

// Setăm valoarea pentru optionalNights
void Booking::setOptionalNights(int n) {
    optionalNights = n; // Demonstrație pentru Item 4
}

// Afișăm valoarea optionalNights, dacă este setată
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
