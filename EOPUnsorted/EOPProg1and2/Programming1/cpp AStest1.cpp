#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a=15;
	float time,velocity,distance;
	cout << "Enter time in seconds: ";
	cin >> time;
	velocity= 0 + (a*time);
	distance= (0*time) + (a*(pow(time,2)))/2;
	cout << "The velocity,vf is " << velocity << "m/s" << endl;
	cout << "The distance,x is " << distance << " meters.";
	return 0;
}
