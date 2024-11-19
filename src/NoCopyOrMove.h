#ifndef NO_COPY_OR_MOVE_H
#define NO_COPY_OR_MOVE_H

#include <iostream>

// Clasă pentru demonstrarea dezactivării funcțiilor generate de compilator (Item 6)
class NoCopyOrMove {
public:
    NoCopyOrMove() = default; // Constructor implicit

    // Dezactivăm copierea și mutarea
    NoCopyOrMove(const NoCopyOrMove&) = delete;
    NoCopyOrMove& operator=(const NoCopyOrMove&) = delete;
    NoCopyOrMove(NoCopyOrMove&&) = delete;
    NoCopyOrMove& operator=(NoCopyOrMove&&) = delete;

    void doSomething() {
        std::cout << "Action performed in NoCopyOrMove object." << std::endl;
    }
};

#endif // NO_COPY_OR_MOVE_H
