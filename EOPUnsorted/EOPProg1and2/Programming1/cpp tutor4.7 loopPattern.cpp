/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int integer;
	cout << "Program that prints patterns of your character choice." << endl << endl;
	cout << "Enter positive integer: ";
	cin >> integer;

	//first pattern
    for(int i=1;i<=integer;i++)
    {
    	for(int j=0;j<i;j++)
    	{
    		cout << integer;
		}
		cout << endl;
	}
	
	cout << endl;
	
	//second pattern
	for(int k=integer;k>=1;k--)  //int=7 k = 6 , 7>=1
	{
		for(int l=integer-k;l>0;l--)  //l = 7-6 = 1 print 1 time 
		{
			cout << " ";
		}
		for(int m=k;m>0;m--)
		{
			cout << integer;
		}
		cout << endl;
	}
	
	cout << endl;
	
	//third pattern
	int space;

    for(int n = 1, o = 0; n <= integer; ++n, o = 0)
    {
        for(space = 1; space <= integer-n; ++space)
        {
            cout <<"  ";
        }

        while(o != 2*n-1)
        {
            cout << integer << " ";
            ++o;
        }
        cout << endl;
    }
	return 0;
}
