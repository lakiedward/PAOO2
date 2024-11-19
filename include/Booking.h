// Booking.h
#ifndef BOOKING_H
#define BOOKING_H

#include <string>

class Booking {
private:
    std::string* customerName; // Numele clientului (alocat dinamic)
    int nights;                // Numărul de nopți rezervate

public:
    // Constructor
    Booking(const std::string& name, int nights);

    // Destructor
    ~Booking();

    // Copy constructor
    Booking(const Booking& other);

    // Move constructor
    Booking(Booking&& other) noexcept;

    // Metodă pentru afișarea detaliilor rezervării
    void printDetails() const;
};

#endif // BOOKING_H
