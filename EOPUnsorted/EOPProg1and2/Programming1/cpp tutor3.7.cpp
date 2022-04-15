#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	float discriminant;
	cout << "Program that specifies if the equation has two distinct real roots, a single real root, or complex roots." << endl << endl;
	cout << "ax^2+bx^2+c=0" << endl;
	// b^2-4ac = ans
	cout << "Enter the coefficients a, b and c: ";
	cin >> a >> b >> c;
	discriminant = pow(b,2) - 4*(a*c);
	if(discriminant > 0)
	{
		cout << "The equation has two distinct real roots.";
	}
	else if (discriminant < 0)
	{
		cout << "The equation has complex real roots.";
	}
	else if (discriminant == 0)
	{
		cout << "The equation has a single real roots.";
	}
	else
	{
		cout << "Invalid coefficients";
	}
	
	
	
	return 0;
}
