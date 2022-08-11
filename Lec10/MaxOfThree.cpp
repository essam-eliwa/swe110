#include <iostream>  
 
using namespace std;

int maximum (int a, int b, int c){
    int max;
    if(a > b){
        // compare a and c
        if(a > c)
            max = a;
        else
            max = c;
    } else {
        // compare b and c
        if(b > c)
            max = b;
        else
            max = c;
    }
    return max;
}
 
int main()  {  
    int a, b, c, max;  
    /* 
     * Take three numbers as input from user 
     */
    cout <<"Enter Three Integers\n";  
    cin >> a >> b >> c;  
    
    max = maximum(a,b,c);
    /* Print Maximum Number */
    cout << "Maximum Number is = " << max << endl;  
    
    return 0;  
}