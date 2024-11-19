# src/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)

set(myproject "BookingApp")

# Define the executable
add_executable(${myproject} main.cpp Booking.cpp)
