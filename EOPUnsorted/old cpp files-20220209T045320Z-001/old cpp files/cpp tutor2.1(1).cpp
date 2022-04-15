#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float gram,volume,density;
	cout << "Program that calculates the density of an object." << endl << endl;
	cout << "Enter the mass in grams: ";
	cin >> gram;
	cout << "Enter the volume in cm^3: ";
	cin >> volume;
	density = gram/volume;
	cout << setprecision(2) << fixed;
	cout << "The density is " << density << "g/cm^3";
	return 0;
}
