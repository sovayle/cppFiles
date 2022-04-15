/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

float cuboidVolume(float length, float breadth, float height)
{
	float volume = length*breadth*height;
	return volume;
}

int main()
{
	float length,breadth,height;
	cout << "Enter the length of cuboid: ";
	cin >> length;
	cout << "Enter the length of cuboid: ";
	cin >> breadth;
	cout << "Enter the length of cuboid: ";
	cin >> height;
	cout << "Volume of cuboid is " << cuboidVolume(length, breadth, height);
	
	
	return 0;
}








