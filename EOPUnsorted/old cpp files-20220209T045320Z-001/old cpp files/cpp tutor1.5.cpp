/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	float p,breadth,length;
	cout << "Program to calculate the length and breadth of a rectangle when length is 1.5 times the breadth." << endl << endl;
	cout << "Enter the perimeter of a rectangle: ";
	cin >> p;
	breadth = (p/2)/2.5;
	length = (p/2)-breadth;
	cout << "The breadth of the rectangle is: " << breadth << endl;
	cout << "The length of the rectangle is: " << length;
	
	return 0;
}
