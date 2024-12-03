#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include <optional>

class Booking {
private:
    std::string* customerName;    // Pointer dinamic pentru stocarea numelui clientului
    int nights;                   // Număr de nopți
    std::optional<int> optionalNights; // Număr opțional de nopți

public:
    Booking(const std::string& name, int nights); // Constructor
    Booking(); // Constructor implicit

    ~Booking(); // Destructor

    Booking(const Booking& other); // Constructor de copiere
    Booking(Booking&& other) noexcept; // Constructor de mutare

    Booking& operator=(const Booking& other); // Operator de atribuire (Item 10, 11, 12)

    void printDetails() const; // Afișare detalii rezervare
    void setOptionalNights(int n); // Setare valoare opțională
    void printOptionalNights() const; // Afișare valoare opțională
};

#endif // BOOKING_H
