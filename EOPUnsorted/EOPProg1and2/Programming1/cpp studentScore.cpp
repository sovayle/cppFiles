/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Lecturer: Dr Norlia Yusof
*/ 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//int i=0,studentCount,subjectCount;
//const float studentCount=2;
//const float subjectCount=5;

studentScores(string names[2], float score[2][5], int &i)
{
	cout << "Enter student's name: ";
	cin >> names[i]; //0-9
	cout << "Enter student's score: ";
	//cin >> score[][];
	for (int j=0;j<5;j++)
	{
		cin >> score[i][j];
	}
	cout << names[i] << endl;
	for (int j=0;j<5;j++)
	{
		cout << score[i][j] << endl;
	}
	
}
/*
float averageScoreGrade(float score[2][5])
{
	float average;
	float k=0,j=0;
	average = score[k][j];
	
	if(marks >=81 && marks <=100)
	{
		cout << "Grade for the student is A";
	}
	else if (marks >=71 && marks <=80)
	{
		cout << "Grade for the student is B";
	}
	else if (marks >=61 && marks <=70)
	{
		cout << "Grade for the student is C";
	}
	else if (marks >=51 && marks <=60)
	{
		cout << "Grade for the student is D";
	}
	else if (marks >=0 && marks <=50)
	{
		cout << "Grade for the student is F";
	}
	else
	{
		cout << "Invalid marks";
	}
	
	return average;
}


float results()
{
	
}
*/
int main()
{	//three arrays: 1d array for name, 2d array for score , 1d for grade
	//fx to read and store into 2 arrays, fx to calc avg score n grade
	//fx for results
	//prog should output avg
	//int studentCount;
	int subjectCount;
	int i=0;
	cout << "Program to calculate students' average test scores and grades" << endl << endl;
	cout << "How many students are there? Number of students: " << endl; //2
	//cin >> studentCount;
	cout << "How many subjects are there? Number of subjects: " << endl; //5
	//cin >> subjectCount;
	string names[2];
	float score[2][5];
	studentScores(names,score,i);
	i++;
	//studentScores()
	
		
	//cout << "Class average is" << average << endl;
	
	
	return 0;
}
