/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int integer;
	cout << "Program that prints all the factors of a positive integer" << endl << endl;
	cout << "Enter a positive integer: ";
	cin >> integer;
	cout << "The factors of " << integer << " are listed below:" << endl;
	
	for(int i=1;i<integer+1;i++)
	{
		if(integer%i == 0)
		{
			cout << i << " ";
		}
	}
	
	return 0;
}
