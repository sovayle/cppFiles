/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <cstdlib.h>
#include <ctime>
using namespace std;

int rollDice()
	{
		//statements to generate a number between 1-6
		//return the number
		int number = 1 + rand() % 6;
		return number;
	}
	
int main()
{
	srand(time(NULL));
	cout << rollDice();
		
	return 0;
}













