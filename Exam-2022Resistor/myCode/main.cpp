// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here

#include "SerialResistorConnection.h"
#include "ResistorPart.h"
#include "ParallelResistorConnection.h"

// Main program
int main() {
    // Create a resistor named R1 with a value of 42 Ω and 5% tolerance and write it to the console.
    ResistorPart r1("R1", 42.0f, 5.0f);
    std::cout << r1 << std::endl;

    // Create a serial connection named R2 which connects a resistor named R3 (1 kΩ, 10%)
    // and a resistor named R4 (4.7 kΩ, 10%) and write it to the console.
    SerialResistorConnection r2("R2");
    r2 += std::make_shared<ResistorPart>("R3", 1000.0f, 10.0f);
    r2 += std::make_shared<ResistorPart>("R4", 4700.0f, 10.0f);
    std::cout << r2 << std::endl;

    // Create a parallel connection named R5 which connects a resistor named R6 (1 kΩ, 10%)
    // and a resistor named R7 (4.7 kΩ, 10%) and write it to the console.
    ParallelResistorConnection r5("R5");
    r5 += std::make_shared<ResistorPart>("R6", 1000.0f, 10.0f);
    r5 += std::make_shared<ResistorPart>("R7", 4700.0f, 10.0f);
    std::cout << r5 << std::endl;

    return 0;
}
