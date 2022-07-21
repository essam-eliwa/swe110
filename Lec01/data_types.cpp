/**
 *	SWE110 Lec01, data_types.cpp
 *	Purpose: define and print variables with various C++ data typea
 *
 *	@author Essam Eliwa
 *	@version 1.0 20/06/2022
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Creating variables
    int num = 5;             // Integer (whole number)
    float floatNum = 5.99;   // Floating point number
    double doubleNum = 9.98; // Floating point number
    char letter = 'D';       // Character
    bool boolean = true;     // Boolean
    string string = "Hello"; // String

    // Print variable values
    cout << "int: " << num << "\n";
    cout << "float: " << floatNum << "\n";
    cout << "double: " << doubleNum << "\n";
    cout << "char: " << letter << "\n";
    cout << "bool: " << boolean << "\n";
    cout << "string: " << string << "\n";

    std::cout << "boolalpha off true  : " << true << "\n"
              << "boolalpha off false : " << false << "\n";

    std::cout << std::boolalpha
              << "boolalpha on true  : " << true << "\n"
              << "boolalpha on false : " << false << "\n"
              << std::noboolalpha;

    return 0;
}