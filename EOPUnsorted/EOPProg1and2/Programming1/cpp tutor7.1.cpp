/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int integers[10];
	int max=0,maxIndex=0;
	for(int i=0;i<10;i++)
	{
		cout << "Enter 10 integers (" << i+1 << "/10):";
		cin >>integers[i]; //1-10
		if (integers[i] > max)
		{
			max = integers[i];
			maxIndex=i;
		}	
	}
	cout << "The index of the maximum value among the 10 integers is: " << maxIndex;
	
	return 0;
}









