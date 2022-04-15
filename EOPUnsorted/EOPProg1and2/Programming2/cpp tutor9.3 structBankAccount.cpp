/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

struct bankAccount{
		int accNumber;
		string accName;
		double accBalance;
	};
	
void deposit(bankAccount &on);
void withdraw(bankAccount &on);
void viewDetails(bankAccount &on);

void withdraw(bankAccount &on)
{
	double minus;
	cout << "Enter an amount to withdraw: ";
	cin >> minus;
	if (minus < 0)
	{
		cout << "Invalid amount" << endl;
	}
	else
	{
		on.accBalance = on.accBalance - minus;
	}
	
};	
void viewDetails(bankAccount &on)
{
	cout << endl;
	cout << "Account number is: " << on.accNumber << endl;
	cout << "Account name is: " << on.accName << endl;
	cout << "Account balance is: " << on.accBalance << endl;
};		

int main()
{
	int choice;
	bankAccount one;
	cout << "Enter account number: ";
	cin >> one.accNumber;
	cout << "Enter account name: ";
	cin >> one.accName;
	cout << "Enter account starting balance: ";
	cin >> one.accBalance;
	
	while(true)
	{
		cout << "Enter 1 to deposit money" << endl;
		cout << "      2 to withdraw money" << endl;
		cout << "      3 to view account details" << endl;
		cout << "      4 to exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	
		if (choice==1)
		{
			deposit(one);
		}
		else if(choice==2)
		{
			withdraw(one);
		}
		else if(choice==3)
		{
			viewDetails(one);
		}
		else if(choice==4)
		{
			break;
		}
		else {
			cout << "Invalid" << endl << endl;
		}
	}
	
	cout << "Thanks for banking!" << endl;
	return 0;
}
void deposit(bankAccount &on)
{
	double plus;
	cout << "Enter an amount to deposit: ";
	cin >> plus;
	on.accBalance = on.accBalance + plus;
};
