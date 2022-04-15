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
		cout << "Enter the student's test score: ";
		cin >> testScore;
		totalTestScore += testScore;
		++count;
		
	}while(testScore!= -1 );
		
	averageTestScore = totalTestScore/count;
	cout << endl << setprecision(2) << fixed;
	cout << "class average is " << averageTestScore << endl;
	
}


