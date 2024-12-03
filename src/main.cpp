#include "Booking.h"
#include "SilentGenerated.h"
#include "NoCopyOrMove.h"
#include <iostream>

// int main() {
//     // Demonstrăm Item 4: Inițializare sigură
//     Booking safeBooking;
//     safeBooking.printOptionalNights();
//     safeBooking.setOptionalNights(5);
//     safeBooking.printOptionalNights();

//     // Demonstrăm Item 5: Funcții generate automat
//     SilentGenerated obj1; // Default constructor
//     SilentGenerated obj2 = obj1; // Copy constructor
//     SilentGenerated obj3;
//     obj3 = obj2; // Copy assignment operator

//     // Demonstrăm Item 6: Dezactivare funcții generate
//     NoCopyOrMove obj;
//     obj.doSomething();
    

//     return 0;
// }


int main() {
    Booking b1("John Doe", 3); // Inițializare cu parametri
    Booking b2("Jane Smith", 5); // Inițializare cu alți parametri

    // Test auto-atribuire (Item 11)
    b1 = b1;

    // Test atribuirea între obiecte (Item 10, 12)
    b2 = b1;
    b2.printDetails();

    return 0;
}