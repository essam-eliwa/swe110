#include <iostream>
using namespace std;

bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2 && flag; i++)
    {
        if (num % i == 0)
        {
            flag = false;
        }
    }
    return flag;
}

int main()
{
    int num1, ctr = 0;
    bool found = false;
    cout << "\n\n Find the last prime number occurs before the entered number:\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number to find the last prime number occurs before the number: ";
    cin >> num1;
    for (int n = num1 - 1; n >= 1 && !found; n--)
    {
        if (isPrime(n))
        {
            cout << n << " is the last prime number before " << num1 << endl;
            found = true;
        }
        if (n == 1)
        {
            cout << "no prime number less than 2";
        }
    }

    return 0;
}
