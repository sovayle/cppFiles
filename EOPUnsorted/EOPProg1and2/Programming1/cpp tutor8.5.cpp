/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

bool func(int *arr,int size)
{
	int count=0;
	for (int i = 0; i < size; ++i)
        {
        	count++;
		}
		cout << endl;
	if(count>=2)
	{
		arr[size-2] = 0;
		return true;
	}
	else
	{
		return false;
	}	
}
int main()
{
	cout << "Testing with arr1" << endl;
	int size;
	cout << "enter size: ";
	cin >> size;
	int arr1[size];   

    for (int i = 0; i < size; ++i)
        {
        	cin >> arr1[i];
		}
		cout << endl;
		
	func(arr1,size);
	for (int i = 0; i < size; ++i)
        {
        	cout << arr1[i] << " ";
		}
		cout << endl;	

	return 0;
}
