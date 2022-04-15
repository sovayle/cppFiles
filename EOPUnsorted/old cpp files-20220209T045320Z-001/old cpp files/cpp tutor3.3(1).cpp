#include <iostream>
using namespace std;

int main()
{
	int integer;
	cout << "Program that asks the user to enter the integer representing a month." << endl << endl;
	cout << "Enter an integer: ";
	cin >> integer;
	
	switch(integer)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:	
		case 10:	
		case 12:	
			cout << "There are 31 days in this month";
			break;
		case 2:
			cout << "Month is February.There are 28/29 days in this month";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "There are 30 days in this month";
			break;											
		default:
			cout << "Invalid month";
	}
	
	return 0;
}
