#include <iostream>
using namespace std;
int reverse(int n){
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        cout << "Temp Number: " << rev << endl;
        n /= 10;
    }
    return rev;

}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed Number: " << reverse(n) << endl;
    return 0;
}