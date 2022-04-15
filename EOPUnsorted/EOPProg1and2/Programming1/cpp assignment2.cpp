/**
*@author Your Name: Amirul Azim bin Amran
* Matric no: 2017425
* Elements of Programing 1, Section 3
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name,temp;
	int testScore,count=0;
	char choice;
	float totalTestScore=0,averageTestScore=0;
	
	do{
		cout << "Enter student name: ";
		cin >> name;
		cout << "Enter the student's test score: ";
		cin >> testScore;
		totalTestScore += testScore;
		cout << name <<"'s test score is " << testScore << endl;
		++count;
		cout << "Continue? (Y/y to continue and N/n to stop): ";
		cin >> choice;
		while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
		{
			cout << "Invalid letter, try again.(Y/y to continue and N/n to stop): ";
			cin >> choice;			
		}
		
	}while(choice!= 'N' && choice!= 'n');
	
	
	averageTestScore = totalTestScore/count;
	cout << "class average is " << averageTestScore << endl;
	cout << "test " << totalTestScore <<endl;
	cout << "Names of all the students whose test scores that are below the average test score: " << endl;
	cout << "Highest test score is " << endl;
	cout << "the names of all the students whose test scores are the same as the highest test score: " << endl;
	return 0;
}














