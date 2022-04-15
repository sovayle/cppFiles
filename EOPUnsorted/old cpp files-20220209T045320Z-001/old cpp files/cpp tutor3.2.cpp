#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char character;
	cout << "Program that checks whether a given character is uppercase or lowercase." << endl << endl;
	cout << "Enter a character: ";
	cin >> character;
	if(isupper(character))
	{
		cout << "character is uppercase";
	}
	else if (islower(character))
	{
		cout << "character is lowercase";
	}
	else
	{
		cout << "not a character";
	}
	return 0;
}
