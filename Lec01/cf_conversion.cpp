/**
*	SWE110 Lec01, cf_conversion.cpp
*	Purpose: C++ program to perform celsius to fahrenheit conversion
*
*	@author Essam Eliwa
*	@version 1.0 20/06/2022
*/
#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, celsius;
 
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9) / 5.0 + 32;
    //cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}