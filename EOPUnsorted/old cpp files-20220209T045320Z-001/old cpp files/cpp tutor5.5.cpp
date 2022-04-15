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
	char digit;
	cout << "Program that converts a decimal integer number into a hexadecimal number." << endl << endl;
	cout << "Enter positive integer: ";
	cin >> n;
	
	string ans = "";
	
	while(n!=0)
	{
		int rem = n % 16;
		if(rem<=9)
		{
			//cout << rem;
			ans = char(rem + '0') + ans;
		}
		else
		{
			if(rem==10)
			{
				digit = 'A';
			}
			else if (rem==11)
			{
				digit = 'B';
			}
			else if (rem==12)
			{
				digit = 'C';
			}
			else if (rem==13)
			{
				digit = 'D';
			}
			else if (rem==14)
			{
				digit = 'E';
			}
			else
			{
				digit = 'F';
			}
			//cout << digit;
			ans = digit + ans;
			
		}
		n /= 16;
	}
	
	cout << ans << endl;
	return 0;
}
