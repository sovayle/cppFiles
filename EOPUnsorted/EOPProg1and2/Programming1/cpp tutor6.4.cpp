/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

void digitCount(long long integer)//, int &evenCount, int &oddCount, int &zeroCount)
{
	int evenCount=0;
	int oddCount=0;
	int zeroCount=0;
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
	//return evenCount,oddCount,zeroCount;
}

int main()
{
	//int evenCount=0,oddCount=0,zeroCount=0;
	long long integer=0;
	cout << "Enter a really long number: ";
	//45670
	cin >> integer;
	digitCount(integer); //, evenCount, oddCount, zeroCount);
	//cout << "Number of even numbers is " << evenCount << endl;
    //cout << "Number of odd numbers is " << oddCount << endl;
    //cout << "Number of zeroes is " << zeroCount << endl;
	
	return 0;
}
