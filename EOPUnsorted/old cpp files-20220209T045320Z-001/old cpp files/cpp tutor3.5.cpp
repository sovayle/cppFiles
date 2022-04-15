#include <iostream>
using namespace std;

int main()
{
	float hours,extraHours,totalWage;
	cout << "Program that takes number of hours an employee has worked for and calculates the total wages for the employee." << endl << endl;
	cout << "Enter the amount of hours worked: ";
	cin >> hours;
	if(hours >=1 && hours <=40)
	{
		totalWage = hours * 10;
		cout << "Total wage for this employee is: " << totalWage;
	}
	else if (hours >=41)
	{
		extraHours = hours - 40;
		totalWage = extraHours * 12.5 + (40*10);
		cout << "Total wage for this employee is: " << totalWage;
	}
	else
	{
		cout << "Invalid hours";
	}
	
	return 0;
}
