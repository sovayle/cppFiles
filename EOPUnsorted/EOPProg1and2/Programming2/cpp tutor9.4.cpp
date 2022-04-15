/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string x;
	ifstream inFile;
	inFile.open("fruit_sales.txt");
	cin >> x;
	inFile >> x;
	inFile.close();
	
	ofstream outFile;
	outFile.open("fruit_sales.txt");
	cout << x << endl;
	outFile.close();
	return 0;
}
