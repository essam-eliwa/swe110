#include <iostream>
using namespace std;
int power(int base, int exponent){
    int num = 1;
    for (int i = 1; i <=exponent; i++) 
    {
       num=num*base;
    }
    return num;
}
int main()
{
    int bs, ex;
    cout << "\n\n Find power of any number using for loop:\n";
    cout << "---------------------------------------------\n";
    cout << " Input the base: ";
    cin >> bs;
    cout << " Input the exponent: ";
	cin>>ex;
	

	cout <<bs<<" ^ "<<ex<<" = "<< power(bs,ex) <<endl ;
}