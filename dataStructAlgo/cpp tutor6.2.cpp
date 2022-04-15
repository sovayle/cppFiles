/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

float cuboidVolume()
{
	float length,breadth,height;
	cout << "Enter the length of cuboid: ";
	cin >> length;
	cout << "Enter the length of cuboid: ";
	cin >> breadth;
	cout << "Enter the length of cuboid: ";
	cin >> height;
	float volume = length*breadth*height;
	return volume;
}

int main()
{
	cout << "Volume of cuboid is " << cuboidVolume();
	
	
	return 0;
}
