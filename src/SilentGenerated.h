#ifndef SILENT_GENERATED_H
#define SILENT_GENERATED_H

#include <iostream>

// Clasa demonstrativă pentru funcțiile generate de compilator (Item 5)
class SilentGenerated {
public:
    SilentGenerated() {
        std::cout << "Default constructor called" << std::endl;
    }

    SilentGenerated(const SilentGenerated&) {
        std::cout << "Copy constructor called" << std::endl;
    }

    SilentGenerated& operator=(const SilentGenerated&) {
        std::cout << "Copy assignment operator called" << std::endl;
        return *this;
    }

    ~SilentGenerated() {
        std::cout << "Destructor called" << std::endl;
    }
};

#endif // SILENT_GENERATED_H
