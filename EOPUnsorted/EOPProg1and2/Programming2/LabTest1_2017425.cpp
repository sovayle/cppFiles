/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Lecturer: Dr.Norlia Yusof
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int integer;
    int rows, count = 0, count1 = 0, k = 0;
    float average;
    char decision;
	do{
		
		cout << "Enter the number of rows: ";
		cin >> integer;
		cout << endl;
		while (integer < 1 || integer >10 ) 
		{
			cout << "Enter the integer between 1 and 10." << endl ;
			cin >> integer;
			if (integer < 1 || integer >10 )
			{
				cout << "Enter any key to continue or q to end: ";
				cin >> decision;				
			}
						
		}
		
    for(int i = 1; i <= integer; ++i)
    {
        for(int space = 1; space <= integer-i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= integer-1)
            {
                cout << (i-1)-k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << abs((i-1)-k) << " "; 
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
		average = (integer+10 / (integer*integer) );
		cout << endl << "The average of numbers is " << average << endl;
		cout << "Enter any key to continue or q to end: ";
		cin >> decision;
		
	}while(decision!= 'Q' && decision!= 'q');
	
    return 0;
}



