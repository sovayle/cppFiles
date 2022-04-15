#include <iostream>
using namespace std;

int main()
{
	int marks;
	cout << "Program that takes student marks and prints the grade for that student." << endl << endl;
	cout << "Enter the marks: ";
	cin >> marks;
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
	return 0;
}
