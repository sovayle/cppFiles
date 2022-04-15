/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int binSearch(int number, int array[], int size)
{
	//return index if number is in the array
	//return -1 if n is not in the array
	int pmet = 0;
    int temp = size;
    while(pmet <= temp)
	{
        int mid = (pmet+temp)/2;
		
		//if its in the middle
        if(array[mid] == number)
		{
        	cout << "Index of the number from the list is: ";
            return mid;
        }
        //if its greater than middle
        else if(array[mid] > number)
		{
            temp = mid - 1;
        }
        //if its lower than middle
        else
		{
            pmet = mid + 1;
        }
    }
    return -1;
}

int main()
{
	int number,size;
	cout << "Enter size of array: ";
	cin >> size;
	int array[size];
	
	cout << "Enter numbers until array size is met: ";
    for(int i=0;i<size;i++)
	{
        cin >> array[i];
    }
    
    //selection sort
    for(int i=0; i<=size-2; i++)
	{   
		int min_num = array[i];		//min num = numbers[0] = 6
		int min_ind = i;   //min ind =  0
		for(int j = i+1; j<=size-1; j++)      //j=1 j < 9
   			{
      			if(array[j] < min_num)   //numbers[1]=3 < 6
				{       				
        			min_num = array[j];  //min num = 6
        			min_ind = j; //index of smallest number in unsorted list
				} //i = index of first number in unsorted list
			}
			int temp = array[i];
			array[i] = array[min_ind];
			array[min_ind] = temp;
	}
	cout << "Numbers in ascending order: ";
	for(int i=0;i<size;i++)
	{
		cout << array[i] << " ";
	}
    cout << endl << "Enter number: ";
    cin >> number;
	cout << binSearch(number,array,size) << endl;
	
	return 0;
}

