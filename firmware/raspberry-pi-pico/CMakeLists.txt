# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Set the project name
project(serial-hw-keybridge-raspberry-pi-pico)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(src)

# Add the executable
add_executable(serial-hw-keybridge src/main.cpp src/usb_keyboard.cpp src/serial_handler.cpp)

# Link libraries if needed (e.g., wiringPi, etc.)
# target_link_libraries(serial-hw-keybridge <libraries>)