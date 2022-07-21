
/**
*	SWE110 Lec01, cf_conversion.cpp
*	Purpose: Compute Circle Area With Console Input 
*
*	@author Essam Eliwa
*	@version 1.0 20/06/2022
*/


#include <iostream>
using namespace std;

int main(){
  // Step 1: Read in radius
  double radius;
  cout << "Enter a radius: ";
  cin >> radius;

  // Step 2: Compute area
  double area = radius * radius * 3.14159;

  // Step 3: Display the area
  cout << "The area is " << area << endl;

  return 0;
}
