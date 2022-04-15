/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int &integer)
{
	bool value=false;
	int count=0;
	for(int i=1;i<=integer;i++)
    {
    	if(integer%i==0)
    	{
    		++count;
		}
	}
	
	if (count==2)
	{
		value = true;
	}
	
	return value;
}

int main()
{
	cout << "isPrime will return true if the number is a prime and false if otherwise" << endl << endl;
	int integer;
	cout << "Enter positive integer: ";
	cin >> integer;
	isPrime(integer);
	if (isPrime(integer)==1)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	//cout << isPrime(integer);
	
    
	return 0;
}
