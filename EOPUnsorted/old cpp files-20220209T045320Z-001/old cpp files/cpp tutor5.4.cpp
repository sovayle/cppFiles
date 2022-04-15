/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "Program that converts a decimal integer number into a binary number." << endl << endl;
	cout << "Enter positive integer: ";
	cin >> n;
	
	string ans = "";
	
	while(n!=0)
	{
		int rem = n % 2;
		if(rem<=1)
		{
			//cout << rem;
			ans = char(rem + '0') + ans;
		}
		n /= 2;
	}
	
	cout << ans << endl;
	return 0;
}
