/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	float num1,num2,num3,sum,average;
	cout << "Program to calculate the sum and average of 3 numbers." << endl << endl;
	cout << "Enter first number " << endl;
	cin >> num1;
	cout << "Enter second number " << endl;
	cin >> num2;
	cout << "Enter third number " << endl;
	cin >> num3;
	sum = num1+num2+num3;
	average = sum/3;
	cout << "Sum of the three numbers are " << sum << endl;
	cout << "The average of the three numbers are " << average;
	
	return 0;
}
