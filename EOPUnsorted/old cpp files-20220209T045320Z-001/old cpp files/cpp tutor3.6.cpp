#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Program that checks whether the given year is a leap year or normal year." << endl << endl;
	cout << "Enter the year: ";
	cin >> year;
	
	if(year%100 == 0 )
	{
		if(year != 0 && year %400 ==0)
		{
			cout << year << " is leap year";
		}
		else if (year != 0 && year %400 !=0)
		{
			cout << year << " is a normal year";
		}		
	}
	else if (year%100 != 0 )
	{
		if(year%4 == 0 && year != 0)
		{
		cout << year << " is leap year";
		}
		else if (year%4 != 0 && year != 0)
		{
			cout << year << " is a normal year";
		}		
	}
	else
	{
		cout << "invalid year";
	}
	
	return 0;
}
