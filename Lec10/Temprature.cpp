#include <iostream>
using namespace std;

float toKelvin(float c)
{
    return c + 273.15;
}
// convert celsius to fahreneheit
// Multiply by 9, then divide by 5, then add 3
float toFahrenheit(float c)
{
    return (9.0 / 5.0) * c + 32;
}
int main()
{
    float kel, cel, fahr;
    cout << "\n\n Convert temperature  :\n";
    cout << "----------------------------\n";
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    kel = toKelvin(cel);
    fahr = toFahrenheit(cel);
    cout << " The temperature in Celsius : " << cel << endl;
    cout << " The temperature in Kelvin : " << kel << endl;
    cout << " The temperature in fahreneheit : " << fahr << endl;
    cout << endl;
    return 0;
}
