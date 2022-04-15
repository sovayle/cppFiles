/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <cmath>
using namespace std;

float baseArea(float radius)
{
	float area = M_PI * pow(radius,2);
	return area;
}
float lateralArea(float radius, float height)
{
	float area2 = 2*M_PI*radius*height;
	return area2;
}
float totalArea(float radius, float height)
{
	float area3 = 2*baseArea(radius) + lateralArea(radius, height);
	return area3;
}

int main()
{
	float radius,height;
	cout << "Enter radius of cylinder: ";
	cin >> radius;
	cout << "Enter height of cylinder: ";
	cin >> height;
	baseArea(radius);
	lateralArea(radius, height);
	cout << "The base area of the cylinder is: " << baseArea(radius) << endl;
	cout << "The lateral area of the cylinder is: " << lateralArea(radius, height) << endl;
	cout << "The total area of the cylinder is: " << totalArea(radius, height) << endl;
	
	return 0;
}
