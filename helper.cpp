#include "helper.h" // Includes the helper.h header so that this file matches its function declarations
#include <iostream> // Includes iostream so we can use std::cout for output

void showMessage() // Defines the showMessage() function
{
    std::cout << "Hello this is a message!" << '\n'; // Prints a message followed by a newline
}

int addition(int x, int y) // Defines the addition() function that takes two integers
{
    return x + y; // Returns the sum of x and y
}