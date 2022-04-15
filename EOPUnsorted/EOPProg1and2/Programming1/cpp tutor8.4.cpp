/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#define MAX 5
using namespace std;

int main()
{
	int array[MAX];
	cout << "Enter 5 integers: ";
    for(int i=0;i<MAX;i++)
	{
        cin >> array[i];
    }
    for(int i=0;i<MAX;i++)
	{
        array[i] = array[i]+2;
    }
    for(int i=0;i<MAX;i++)
	{
        cout << array[i] << " " << "at location " << &array[i] << endl;
    }
    
	return 0;
}












