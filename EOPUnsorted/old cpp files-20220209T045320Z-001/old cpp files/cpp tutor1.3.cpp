/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int length,breadth,perimeter,area;
	cout << "Program to calculate the perimeter and area of a rectangle." << endl << endl;
	cout << "Enter the length of rectangle: ";
	cin >> length;
	cout << "Enter the breadth of rectangle: ";
	cin >> breadth;
	perimeter= 2* (length+breadth);
	area = length*breadth;
	cout << "The perimeter of the rectangle is " << perimeter << " and the area of the rectangle is " << area << ".";
	
	
	
	return 0;
}
