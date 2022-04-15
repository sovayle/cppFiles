/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name[10];
	int score[10],sum=0;
	cout << "Enter names of 10 students and their marks" << endl;
	for(int i=0;i<10;i++)
	{
		cout<< "Enter name[" << i+1 << "]:";
		cin >>name[i];
		cout<< "Enter score:";
		cin >>score[i];
		
		sum += score[i];
	}
	float avg = sum / 10;
	
	cout << endl << "classAverage = " << avg << endl;
	cout << "Names of students who scored higher than the average class score:" << endl;
	for (int i=0; i <10; i++)
	{
		if (score[i] > avg)
		{
			cout << name[i] << endl;
		}
	}
	
	return 0;
}
