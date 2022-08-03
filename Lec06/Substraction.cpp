#include <iostream>
#include <ctime> // Needed for the time function
using namespace std;

int main()
{
    int num1, num2, answer, exit = 0;
    srand(time(0));
    do{
    num1 = rand() % 101;
    num2 = rand() % 101;
    // swap numbers when num2 is greater than num1
    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << num1 << "-" << num2 << " = ";
    cin >> answer;

    cout << ((answer == (num1-num2)) ? "correct" : "wrong") << endl;

    cout << "Enter -1 to exit or any other number to continue";
    cin >> exit;
    }while(exit!=-1);

    return 0;
}
