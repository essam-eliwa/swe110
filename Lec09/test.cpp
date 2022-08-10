/**
*	SWE110 Lec01, print_equation.cpp
*	Purpose: Print a math equation and its result to console
*
*	@author Essam Eliwa
*	@version 1.0 20/06/2022
*/

#include <iostream>
int main() {
int sum = 0;
int item = 0;
do{
    item++;
    sum+=item;
    if(sum>4)
        sum++;

}while(item<4);
std::cout << sum;
   return 0;
}
