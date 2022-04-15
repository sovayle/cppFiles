#include <iostream>
using namespace std;

int main()
{
	int integer;
	cout << "Program that determines whether an integer is positive/negative or 0." << endl << endl;
	cout << "Enter an integer: ";
	cin >> integer;
	if(integer <0)
	{
		cout << integer << " is negative";
	}
	else if (integer >0)
	{
		cout << integer << " is positive";
	}
	else
	{
		cout << "Integer is 0";
	}
	
	return 0;
}
