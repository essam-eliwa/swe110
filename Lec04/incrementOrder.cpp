#include <iostream>
using namespace std;

int main()
{
  int x1, x2, i, j, y, z;
  float k, m, f;
  x1 = 3;
  x2 = 3;
  y = 7 + x1--;
  z = 7 + ++x2;
  i = 6 % 4;
  j = 1;
  j += j + 3;
  k = 9 / 2;
  m = 9.0 / 2;
  f = (float)((2 / 5) * k);

  cout << "x1 is " << x1 << endl;
  cout << "x2 is " << x2 << endl;
  cout << "i is " << i << endl;
  cout << "j is " << j << endl;
  cout << "k is " << k << endl;
  cout << "m is " << m << endl;
  cout << "y is " << y << endl;
  cout << "z is " << z << endl;
  cout << "f is " << f;

  return 0;
}

/*
x1 is 2
x2 is 4
i is 2
j is 5
k is 4
m is 4.5
y is 10
z is 11
f is 0
*/
