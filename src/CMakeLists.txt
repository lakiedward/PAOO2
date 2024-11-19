# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

set(myproject "BookingApp")

# Definește fișierele sursă pentru proiect
add_executable(${myproject}
    main.cpp
    Booking.cpp
    SilentGenerated.h
    NoCopyOrMove.h
)
