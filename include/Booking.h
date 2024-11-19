#ifndef BOOKING_H
#define BOOKING_H

#include <string>
#include <optional>

// Clasa Booking gestionează informații despre o rezervare
class Booking {
private:
    std::string* customerName;    // Alocat dinamic pentru demonstrarea eliberării heap-ului
    int nights;                   // Număr de nopți
    std::optional<int> optionalNights; // Exemplu pentru inițializare sigură (Item 4)

public:
    Booking(const std::string& name, int nights); // Constructor
    Booking(); // Constructor implicit pentru Item 4

    ~Booking(); // Destructor

    Booking(const Booking& other); // Copy constructor
    Booking(Booking&& other) noexcept; // Move constructor

    void printDetails() const; // Afișarea detaliilor rezervării
    void setOptionalNights(int n); // Setăm valoarea membrului optionalNights
    void printOptionalNights() const; // Afișăm optionalNights pentru demonstrarea siguranței

private:
    // Dezactivăm copierea și mutarea automată pentru Booking fără constructori (Item 6)
    Booking& operator=(const Booking&) = delete;
    Booking& operator=(Booking&&) = delete;
};

#endif // BOOKING_H
