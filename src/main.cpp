// main.cpp
#include "Booking.h"
#include <iostream>
#include <utility>

void processBooking(Booking b) {
    std::cout << "Processing booking:" << std::endl;
    b.printDetails();
}

int main() {
    // Inițializarea membrilor în constructor
    Booking booking1("John Doe", 3);
    std::cout << "Initial booking:" << std::endl;
    booking1.printDetails();

    // Suprascrierea copy constructor-ului
    processBooking(booking1);  // Copy constructor este apelat aici

    // Crearea unui obiect folosind move constructor
    Booking booking2 = std::move(booking1);  // Move constructor este apelat aici
    std::cout << "After moving booking1 to booking2:" << std::endl;
    booking2.printDetails();
    booking1.printDetails(); // Verificăm că booking1 este gol după mutare

    return 0;
}
