/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int integer,count=0;
	cout << "Program that determines if a number is prime or composite" << endl << endl;
	cout << "Enter positive integer: ";
	cin >> integer;

    for(int i=1;i<=integer;i++)
    {
    	if(integer%i==0)
    	{
    		++count;
		}
	}
	
	if (integer==0 || integer==1)
	{
		cout << "Not prime or composite";
	}
	else if (count==2)
	{
		cout << integer << " is a prime number";
	}
	else
	{
		cout << integer << " is a composite number";
	}
    
	return 0;
	
}






