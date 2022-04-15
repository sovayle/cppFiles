/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

struct Employee{
	string fName;
	string lName;
	int empID;
	float wageHour;
	float hoursWorked;
};

int main()
{
	Employee five[5];
	float totalWage[5];
	for (int i=0;i<5;i++)
	{
		cout << "Enter Employee " << i+1 << "'s first name: "; 
		cin >> five[i].fName;
		cout << "Enter Employee " << i+1 << "'s last name: "; 
		cin >> five[i].lName;
		cout << "Enter Employee " << i+1 << "'s employee ID: "; 
		cin >> five[i].empID;
		cout << "Enter Employee " << i+1 << "'s wage per hour: "; 
		cin >> five[i].wageHour;
		cout << "Enter Employee " << i+1 << "'s hours worked: "; 
		cin >> five[i].hoursWorked;
		totalWage[i]= five[i].wageHour*five[i].hoursWorked;		
		cout <<endl;
	}
	
	cout << "Employee ID \t\t Employee name  Total wage" << endl;
	for (int i=0;i<5;i++)
	{
		cout << "\t" << five[i].empID << "\t\t";
		cout << five[i].fName << " " << five[i].lName << "\t    ";
		cout << totalWage[i] << endl;
	}
	
	return 0;
}
