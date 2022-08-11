#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "\n\n Display n terms of natural number and their sum:\n";
    cout << "---------------------------------------\n";
	cout << " Input a number of terms: ";
	cin>> n;		
    cout << " The natural numbers upto "<<n<<" are: \n";
    for (i = 1; i <= n; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of the natural numbers is: "<<sum << endl;
}
