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
	int n;
	int sum=0;
	cout << "Program that accepts a positive integer,n and finds the sum pf 1^2 + 2^2+ ... + n^2 using a loop" << endl << endl;
	cout << "Enter positive integer n: ";
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
		sum = sum + pow(i,2);
	}
	
	cout << "Sum of squares is " << sum;
	
	
	return 0;
}
