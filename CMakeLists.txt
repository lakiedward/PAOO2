cmake_minimum_required(VERSION 3.10)

project(BookingApp) # Numele proiectului

set(CMAKE_CXX_STANDARD 17) # Standardul C++ utilizat

# Include directorul cu fișierele de header
include_directories(include)

# Adaugă directorul cu fișierele sursă
add_subdirectory(src)
