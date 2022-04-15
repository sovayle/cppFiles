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
	cout << "Program that prints a multiplication table for that number." << endl << endl;
	cout << "Enter an integer: ";
	cin >> n;
	for(int i=1;i<=12;i++)
	{
		cout << n << " * " << i << " = " << n*i << endl;
	}
	
	return 0;
}




