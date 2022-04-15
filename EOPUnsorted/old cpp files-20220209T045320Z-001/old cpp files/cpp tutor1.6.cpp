/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cout << "Program to reverse a 3-digit number." << endl << endl;
	cout << "Enter a 3-digit number: ";
	cin >> num;
	
	//Get the last digit
	int d1=num%10;
	//d1;
	num=num/10;
	
	//Get the middle digit
	int d2=num%10;
	//d2;
	num=num/10;
	
	int ans = d1 * 100 + d2 * 10 + num;
	cout <<ans<<endl;
	
	return 0;
}
