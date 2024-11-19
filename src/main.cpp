#include "Booking.h"
#include "SilentGenerated.h"
#include "NoCopyOrMove.h"
#include <iostream>

int main() {
    // Demonstrăm Item 4: Inițializare sigură
    Booking safeBooking;
    safeBooking.printOptionalNights();
    safeBooking.setOptionalNights(5);
    safeBooking.printOptionalNights();

    // Demonstrăm Item 5: Funcții generate automat
    SilentGenerated obj1; // Default constructor
    SilentGenerated obj2 = obj1; // Copy constructor
    SilentGenerated obj3;
    obj3 = obj2; // Copy assignment operator

    // Demonstrăm Item 6: Dezactivare funcții generate
    NoCopyOrMove obj;
    obj.doSomething();
    // NoCopyOrMove obj2 = obj; // Eroare - Copy constructor dezactivat
    // NoCopyOrMove obj3 = std::move(obj); // Eroare - Move constructor dezactivat

    return 0;
}
