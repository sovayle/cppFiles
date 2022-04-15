#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float fahrenheit,celcius;
	cout << "Program that converts temperatures in fahrenheit to celsius" << endl << endl;
	cout << "Enter the temperature in fahrenheit (32-212): ";
	cin >> fahrenheit;
	celcius = (5*(fahrenheit-32))/9;
	cout << setprecision(2) << fixed;
	cout << "The temperature in celcius is: " << celcius << " degrees celcius.";
	return 0;
}
