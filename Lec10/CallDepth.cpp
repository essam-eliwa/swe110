#include <iostream>
using namespace std;

void recursive(int callDepth)
{
    const int MAX_DEPTH = 4;
    if (callDepth < MAX_DEPTH)
    {

        cout << "up callDepth is : " << callDepth << endl;
        // Increase call depth
        recursive(++callDepth);
        // Decrease call depth
        cout << "down callDepth is : " << callDepth << endl;
    }
}

int main()
{

    recursive(0);
    return 0;
}