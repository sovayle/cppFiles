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
	cout << "Program that prints numbers from 1-100" << endl << endl;
	
	for(int i=1;i<=100;i++)
	{
		if(i%3!=0 && i%5!=0)
		{
			cout << i << endl; 
		}
		else if(i%3!=0 || i%5!=0)
		{
			if(i%3==0 && i%5!=0)
			{
				cout << "Fizz" << endl;
			}
			else if(i%3!=0 && i%5==0)
			{
				cout << "Buzz" << endl;
			}
		}
		else //if(i%3==0 && i%5==0)
		{
				cout << "FizzBuzz" << endl;
		}
	}
	
	return 0;
}
