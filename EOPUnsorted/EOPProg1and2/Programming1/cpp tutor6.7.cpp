/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

void incTwo(int &integ)
{
	++integ;
	++integ; 
}
/*
int postInc(int &x){
	int originalX = x;
	x= x+1;
	return originalX;
}
*/

int main()
{
	int integer=0;
	cout << "Enter an number: ";
	cin >> integer;
	incTwo(integer);
	cout << "The value of the number incremented by 2 is: " << integer;
	
	
	return 0;
}
