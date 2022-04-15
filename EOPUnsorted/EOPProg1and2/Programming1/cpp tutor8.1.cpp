/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#define MAX 10
using namespace std;

int main()
{
	//selection sort
	//6,3,0,2,7,8
	int i,j,temp;
	int numbers[MAX];
	cout << "Enter 10 numbers: ";
	for(i=0;i<MAX;i++)
	{
		cin >> numbers[i];
	}

	for(i=0; i<=MAX-2; i++)
	{   
		int min_num = numbers[i];		//min num = numbers[0] = 6
		int min_ind = i;   //min ind =  0
		for(j = i+1; j<=MAX-1; j++)      //j=1 j < 9
   			{
      			if(numbers[j] < min_num)   //numbers[1]=3 < 6
				{       				
        			min_num = numbers[j];  //min num = 6
        			min_ind = j; //index of smallest number in unsorted list
				} //i = index of first number in unsorted list
			}
			int temp = numbers[i];
			numbers[i] = numbers[min_ind];
			numbers[min_ind] = temp;
	}
	cout << "Numbers in ascending order: ";
	for(i=0;i<MAX;i++)
	{
		cout << numbers[i] << " ";
	}
	return 0;
}
