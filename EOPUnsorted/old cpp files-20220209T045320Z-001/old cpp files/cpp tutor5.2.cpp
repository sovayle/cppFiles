/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cout << "Program that prints an n x m grid of asterisks." << endl << endl;
	cout << "Enter value of n: ";
	cin >> n;
	cout << "Enter value of m: ";
	cin >> m;
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cout << "*";
		}
		cout << endl;
	}

	
	return 0;
}
