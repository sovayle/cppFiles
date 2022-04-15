/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

void swapVars(int &num1 , int &num2)
{
	int swap;
	swap = num1;
	num1=num2;
	num2=swap;
}

int main()
{
	int x,y;
	cout << "Enter values of x and y: ";
	cin >> x >> y;
	
	swapVars(x,y);
	
	cout << "Swapped values of x and y: " << x << " " << y;
	return 0;
}
