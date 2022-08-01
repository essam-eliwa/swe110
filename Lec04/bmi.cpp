#include<iostream>
using namespace std;
 
int main()
{
 
float bmi,w,h; //w=weight , h=height
cout<<"Please Enter your weight in kilograms: ";
    cin>>w;
cout<<"Please Enter your Height in meters: ";
    cin>>h;
bmi=(w)/(h*h);
cout<<"Your BMI is : "<<bmi<<endl;
 
if (bmi >=30)
    cout << "obese"<<endl;
else if(bmi>25)
    cout<<"Overweight"<<endl;
else if(bmi<25 && bmi>18.5)
    cout<<"Healthy"<<endl;
else
    cout<<"Underweight"<<endl;
return 0;
}