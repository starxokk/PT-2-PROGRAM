#include <iostream> // Allows use of standard input/output (cout, cin, etc.)
#include <conio.h> // Console I/O functions (non-standard, mostly used in Windows for getch, not actually used here)
#include "helper.h" // Includes your custom helper file (probably contains the addition() function)

using namespace std; // Lets us use names from the standard library without "std::" prefix

#define EL '\n'; // Defines EL as a newline character (note: the semicolon here will be included in the macro)

void getNumbers(); // Function prototype so it can be used before being defined

int firstNum; // Global variable to store first number input
int secondNum; // Global variable to store second number input

int main() // Program starts here
{
    bool running = true; // Keeps track if the program should keep looping
    char input; // Stores the user's menu choice
    
    cout << "=-=-=-=-=-=-=" << EL; // Prints a decorative line followed by a newline
    cout << "Calculator Application" << EL; // Prints the application title followed by a newline
    
    while(running) // Loop runs while running is true
    {
        cout << "Type 'm' to multiply" << EL; // Menu option for multiplication
        cout << "Type 'd' to divide" << EL; // Menu option for division
        cout << "Type 'a' to add" << EL; // Menu option for addition
        cout << "Type 's' to subtract" << EL; // Menu option for subtraction
        cout << "Type anything else to abort out of program" << EL; // Menu option to exit
        cin >> input; // Takes the user’s choice
        
        int final_number; // Variable to store the calculation result
        input = tolower(input); // Converts input to lowercase for consistency
        
        switch(input) // Decides action based on user’s choice
        {
            case 'm': // If the user chose multiplication
                getNumbers(); // Ask for two numbers
                final_number = firstNum * secondNum; // Multiply them
                cout << "Your product is: " << final_number << EL; // Display result
                break; // Exit switch
                
            case 'd': // If the user chose division
                getNumbers(); // Ask for two numbers
                final_number = firstNum / (double)secondNum; // Divide (cast to double to avoid integer division)
                cout << "Your quotient is: " << final_number << EL; // Display result
                break; // Exit switch
                
            case 'a': // If the user chose addition
                getNumbers(); // Ask for two numbers
                final_number = addition(firstNum, secondNum); // Call custom addition() function from helper.h
                cout << "Your sum is: " << final_number << EL; // Display result
                break; // Exit switch
                
            case 's': // If the user chose subtraction
                getNumbers(); // Ask for two numbers
                final_number = firstNum - secondNum; // Subtract the second number from the first
                cout << "Your difference is: " << final_number << EL; // Display result
                break; // Exit switch
                
            default: // If input doesn’t match any valid option
                running = false; // Set running to false to stop the loop
                break; // Exit switch
        }
    }
    return 0; // End of program
}

void getNumbers() // Function definition for getting two numbers from the user
{
    cout << "Input your first number: "; // Ask for first number
    cin >> firstNum; // Store first number in global variable
    cout << "Input your second number: "; // Ask for second number
    cin >> secondNum; // Store second number in global variable
}