/**
*	SWE110 Lec01, hello.cpp
*	Purpose: Print Hello World! to console
*
*	@author Essam Eliwa
*	@version 1.0 20/06/2022
*/

// This statements tells the compiler to include iostream file. 
// This file contains pre defined input/output functions that we can use in our program.
#include <iostream>

// The using namespace statement means that in the scope it is present
// make all the things under the std namespace available without having to 
// prefix std:: before each of them.
using namespace std;

// The main function of our program and the execution of program begins with this function, 
// the int here is the return type which indicates to the compiler that this function 
// will return a integer value. That is the main reason we have a return 0 statement
int main() {

  // The cout object belongs to the iostream file and the purpose of this object is to 
  // display the content between double quotes as it is on the screen. 
  cout << "Hello World!";

  // This statement returns value 0 from the main() function which indicates 
  // that the execution of main function is successful
  return 0;
}