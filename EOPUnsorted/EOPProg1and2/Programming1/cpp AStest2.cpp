#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,b,theta;
	cout << "Enter the value of a " << endl;
	cin >> a;
	cout << "Enter the value of b " << endl;
	cin >> b;
	cout << "The value of c is " << hypot(a, b) << endl;
	theta=(a/b);
	cout << "The value of angle,theta is " << atan(theta) * (180/M_PI);
	
	return 0;
}
