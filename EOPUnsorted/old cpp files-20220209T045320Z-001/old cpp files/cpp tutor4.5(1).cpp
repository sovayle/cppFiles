/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int integer,evenCount=0,oddCount=0,zeroCount=0;
	cout << "Program that counts the number of even, odd and zeroes." << endl << endl;
	cout << "Enter positive integer: ";
	cin >> integer;

	//45670
    while(integer != 0)
	{
        if(integer%10==0)
        {
        	++zeroCount;
        	integer/= 10;
		}
		else
		{
			if(integer%2==0)
			{
				++evenCount;
				integer/= 10;
			}
			else
			{
				++oddCount;
				integer/= 10;
			}
		}	
	}	
    
    cout << "Number of even numbers is " << evenCount << endl;
    cout << "Number of odd numbers is " << oddCount << endl;
    cout << "Number of zeroes is " << zeroCount << endl;
    

	
	return 0;
}
