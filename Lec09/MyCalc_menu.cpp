#include <iostream>
using namespace std;

int add(int, int);      // function prototype
int subtract(int, int); // function prototype
int multiply(int, int); // function prototype
int divide(int, int);   // function prototype
char menu();

int main()
{
    int a, b;
    bool exit = false;
    do
    {
        char ch = menu();

        switch (ch)
        {
        case 'a':
        case 'A':
            cout << "Enter any two number: ";
            cin >> a >> b;
            cout << "\nSummation = " << add(a, b);
            break;
        case 'b':
        case 'B':
            cout << "Enter any two number: ";
            cin >> a >> b;
            cout << "\nSubtraction = " << subtract(a, b);
            break;
        case 'c':
        case 'C':
            cout << "Enter any two number: ";
            cin >> a >> b;
            cout << "\nMultiplication = " << multiply(a, b);
            break;
        case 'd':
        case 'D':
            cout << "Enter any two number: ";
            cin >> a >> b;
            cout << "\nDivision = " << divide(a, b);
            break;
        case 'q':
        case 'Q':
            exit = true;
            cout << "\n Good Bye";
            break;
        default:
            cout << "Invalid Choice";
            break;
        }
        cout << endl;

    } while (!exit);
    return 0;
}

char menu()
{
    char choice;
    cout << "Calc Menu \n";
    cout << "============\n";
    cout << "a) Summation\n";
    cout << "b) Subtraction\n";
    cout << "c) Multiplication\n";
    cout << "d) Division\n";
    cout << "q) Quit\n\n";
    cin >> choice;
    return choice;
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