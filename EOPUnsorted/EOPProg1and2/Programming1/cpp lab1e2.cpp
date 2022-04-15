/**
*@author Your Name: Amirul Azim bin Amran
* Matric no: 2017425
* Lab #1 Section 3
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//runner runs 14km in 45min & 30sec = 14km/45.5min
	//14km/(45.5/60)hours
	//1 mile = 1.6km
	float hours= (45.5/60);
	float miles=14*1.6;
	cout << "A runner runs 14kilometers in " << hours << "hours" << endl;
	cout << "A runner runs an average speed of " << miles/hours << "miles per hour" << endl;
	return 0;
	
}
