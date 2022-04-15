/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum=0;
	cout << "Program that allows a series of integers and finds their sum. Stops at 0" << endl << endl;
	cout << "Enter numbers:" << endl;
	
	while(n != 0)
	{
		cin >> n;
		sum += n;	
	}
	
	cout << "Sum of numbers is " << sum;
	
	
	return 0;
}
