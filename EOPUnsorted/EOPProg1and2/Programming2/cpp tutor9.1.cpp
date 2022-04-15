/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <cmath>
using namespace std;

struct Point{
	float x;
	float y;
};

int main()
{
	float area;
	Point coord1;
	Point coord2;
	Point coord3;
	cout << "Enter coordinates 1's X value: ";
	cin >> coord1.x;
	cout << "Enter coordinates 1's Y value: ";
	cin >> coord1.y;
	cout << "Enter coordinates 2's X value: ";
	cin >> coord2.x;
	cout << "Enter coordinates 2's Y value: ";
	cin >> coord2.y;
	cout << "Enter coordinates 3's X value: ";
	cin >> coord3.x;
	cout << "Enter coordinates 3's Y value: ";
	cin >> coord3.y;
	area = abs((coord1.x*(coord2.y-coord3.y)+coord2.x*(coord3.y-coord1.y)+coord3.x*(coord1.y-coord2.y))/2.0);
	cout << "The value of the traingle's area is: " << area << endl;

	return 0;
}













