#include <iostream>
#include <ctime> // Needed for the time function
using namespace std;

int mysum(int i1, int i2)
{
    int sum = 0;
    for (int i = i1; i <= i2; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << mysum(x, y);
    cout << "Sum from 1 to 10 is " << mysum(1, 10) << endl;
    cout << "Sum from 20 to 37 is " << mysum(20, 37) << endl;
    cout << "Sum from 35 to 49 is " << mysum(35, 49) << endl;
    return 0;
}
