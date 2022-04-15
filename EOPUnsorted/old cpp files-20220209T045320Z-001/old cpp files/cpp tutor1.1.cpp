/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int num1,num2,rem,quo;
	cout << "Program to calculate the quotient and remainder of two positive integers." << endl << endl;
	cout << "Enter first number " << endl;
	cin >> num1;
	cout << "Enter second number " << endl;
	cin >> num2;
	quo = num1/num2;
	rem = num1%num2;
	cout << "Quotient of the 2 integers are " << quo << endl;
	cout << "Remainder of the 2 integers are " << rem << endl;
	
	return 0;
}
