/**
*	SWE110 Lec01, sizeof.cpp
*	Purpose: C++ program to print datatypes size
*
*	@author Essam Eliwa
*	@version 1.0 21/06/2022
*/

#include <iostream>
using namespace std;
 
int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of short : " << sizeof(short) << endl;

   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of long : " << sizeof(long) << endl;

   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;


   
   return 0;
}