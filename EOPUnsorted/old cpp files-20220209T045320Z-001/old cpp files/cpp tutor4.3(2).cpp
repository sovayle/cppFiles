/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int integer=0,reversedNumber=0,remainder=0;
	cout << "Program that reverses the integer typed." << endl << endl;
	cout << "Enter positive integer: ";
	cin >> integer;

    while(integer != 0) 
	{
        remainder = integer%10;
        reversedNumber = reversedNumber*10 + remainder;
        integer /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;
	
	return 0;
}
