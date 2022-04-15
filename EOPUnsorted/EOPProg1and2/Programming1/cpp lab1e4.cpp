/**
*@author Your Name: Amirul Azim bin Amran
* Matric no: 2017425
* Lab #1 Section 3
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num,digit1,digit2,digit3;
	cout << "Enter a number between 0 and 1000: ";
	cout << "The sum of the digits is " << endl;
	cin >> num;
	digit1=num/100;
	digit2=(num%100)/10;
	digit3=num%10;
	
	cout << digit1+digit2+digit3;
	return 0;
}















