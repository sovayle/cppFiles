/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	//selection sort
	//6,3,0,2,7,8
	int i,j,temp;
	int numbers[10];
	cout << "Enter 10 numbers: ";
	for(i=0;i<10;i++)
	{
		cin >> numbers[i];
	}

	for(i=0; i<10; i++)
	{         //i 0
		for(j = i+1; j<10; j++)      //j = 0+1   j = 2
   			{
      			if(numbers[j] < numbers[i])          //a 1 < a 0    a 2 < a 0
				{  
	  				cout << numbers[j] << " < " << numbers[i] << " || a" << j << " < a" << i << endl;       				
        			temp = numbers[i];           //temp = a 0    temp = 
        			numbers[i] = numbers[j];           //a 0  = a 1
        			numbers[j] = temp;          //a 1 = temp
				}
			}
	}
	cout << "Numbers in ascending order: ";
	for(i=0;i<10;i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}
