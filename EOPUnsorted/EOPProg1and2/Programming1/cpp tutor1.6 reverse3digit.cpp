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
	int num;
	cout << "Program to reverse a 3-digit number." << endl << endl;
	cout << "Enter a 3-digit number: "; //975
	cin >> num;
	
	//Get the last digit
	int d1=num%10;				//gets 5
	//d1;
	num=num/10;					//offiially make num to 97
	
	//Get the middle digit
	int d2=num%10;				//gets 7
	//d2;
	num=num/10;					//officially make num 9
	
	int ans = d1 * 100 + d2 * 10 + num;		//5*100 + 7*10 + 9
	cout <<ans<<endl;
	
	return 0;
}
