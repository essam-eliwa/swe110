#include<iostream>
using namespace std;
int  numPrint(int);
int main()
{
    int n = 1;
	cout << "\n\n Recursion : print first 20 natural numbers :\n";
	cout << "-------------------------------------------------\n"; 
	cout << " The natural numbers are :\n";
    numPrint(n);
    cout << "\n\n";
    return 0;
}
int numPrint(int n)
{
    if(n<=20)
    {
         cout << n << endl;
         numPrint(n+1);
    }
}