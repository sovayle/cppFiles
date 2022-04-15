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
    float average;
    char decision;
	do{
		
		cout << "Enter the number of rows: ";
		cin >> integer;
		while (integer < 1 || integer >10 ) 
		{
			cout << "Enter the integer between 1 and 10." << endl ;
			if (integer < 1 || integer >10 )
			{
				cout << "Enter any key to continue or q to end: ";
				cin >> decision;		//q		
			}
			if (decision == 'Q' || decision == 'q')
			{
				break;
			}
			
		}
		if (decision == 'Q' || decision == 'q')
			{
				break;
			}
		else
		{
			cout << "The average of numbers is " << average << endl;
			cout << "Enter any key to continue or q to end: ";
			cin >> decision;
		}	
		
	}while(decision!= 'Q' && decision!= 'q');
	
    return 0;
}
