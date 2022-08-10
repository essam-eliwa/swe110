#include <iostream>
using namespace std;

int add(int, int);      // function prototype
int subtract(int, int); // function prototype
int multiply(int, int); // function prototype
int divide(int, int);   // function prototype

int main()
{
    int a, b;
    cout << "Enter any two number: ";
    cin >> a >> b;
    cout << "\nSummation = " << add(a, b);
    cout << "\nSubtraction = " << subtract(a, b);
    cout << "\nMultiplication = " << multiply(a, b);
    cout << "\nDivision = " << divide(a, b);
    cout << endl;
    return 0;
}

int add(int x, int y) // function definition
{
    int res;
    res = x + y;
    return res;
}

int subtract(int x, int y) // function definition
{
    int res;
    res = x - y;
    return res;
}

int multiply(int x, int y) // function definition
{
    int res;
    res = x * y;
    return res;
}

int divide(int x, int y) // function definition
{
    if (y == 0)
    {
        cout << "\n\nDivide by Zero Error..!!";
    }
    else
    {
        int res;
        res = x / y;
        return res;
    }
}