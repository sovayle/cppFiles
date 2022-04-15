#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float length, breadth, height, volume, r, diameter;
	cout << "Program that calculates the diameter of the largest possible ball that can be made." << endl << endl;
	cout << "Enter the length of the block of clay: ";
	cin >> length;
	cout << "Enter the breadth of the block of clay: ";
	cin >> breadth;
	cout << "Enter the height of the block of clay: ";
	cin >> height;
	volume = length*breadth*height;
	//formula for sphere volume is 4/3*pi*r^3
	//volume ie; 80 = 4/3*pi*r^3
	//diameter = 2*r
	diameter = 2*(cbrt(volume/(4.0/3.0)/M_PI));
	cout << setprecision(2) << fixed;
	cout << "The diameter of the largest possible ball is " << diameter;
	return 0;
}
