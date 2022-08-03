#include <iostream>
#include <ctime> // Needed for the time function
using namespace std;

int main(){
  int num1,num2,answer;
  srand(time(0));
  num1 = rand() % 101;
  num2 = rand() % 101;
  // swap numbers when num2 is greater than num1
    if(num1 < num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

  cout << num1 << "-" << num2 << " = ";
  cin >> answer;

  if(answer == (num1-num2)){
    cout << "Correct";
  } else{
    cout << "Wrong";
  } 

  
  return 0;
}
