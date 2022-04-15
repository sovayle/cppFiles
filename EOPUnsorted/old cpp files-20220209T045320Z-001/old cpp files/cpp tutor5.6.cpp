/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int testScore,count,choice=0;
	string name;
	float totalTestScore=0,averageTestScore=0;
	
	cout << "Program that accepts from the user marks for each student in a class and prints the class average." << endl << endl;
	do{
		cout << endl << "Enter student name: ";
		cin >> name;
		cout << "Enter the student's test score: ";
		cin >> testScore;
		totalTestScore += testScore;
		cout << name <<"'s test score is " << testScore << endl;
		++count;
		cout << "Continue? (-1 to stop and any other number to continue): ";
		cin >> choice;
		
	}while(choice!= -1 );
		
	averageTestScore = totalTestScore/count;
	cout << endl << setprecision(2) << fixed;
	cout << "class average is " << averageTestScore << endl;
	
}


