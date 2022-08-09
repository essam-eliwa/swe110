#include <iostream>
#include <string>
using namespace std;

void myFunction(string name) {
  cout << "Greetings " << name << ".\n";
}

int main() {
  myFunction("Adam");
  myFunction("Walaa");
  myFunction("Ahmed");
  return 0;
}