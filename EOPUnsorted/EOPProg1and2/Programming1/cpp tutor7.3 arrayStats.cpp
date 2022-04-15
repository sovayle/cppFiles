/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
#include <string>
#include <cmath>
const int N=10;
using namespace std;

float calcMean(float values[N])
{
	float mean=0;
	for(int i=0;i<10;i++)
	{
		mean += values[i];
	}
	mean = mean/N;
	
	return mean;
}

float calcStdDev(float values[N])
{
	float mean=0;
	for(int i=0;i<10;i++)
	{
		mean += values[i];
	}
	mean = mean/N;
	float standardDeviation=0;
	for(int i=0;i<10;i++)
	{
		standardDeviation += pow((values[i]-mean),2);
	}
	standardDeviation = sqrt(standardDeviation/N);
	return standardDeviation;
}

int main()
{
	cout << "Program to calculate Mean and Standard Deviation of 10 values." << endl << endl;
	float values[N];
	for(int i=0;i<10;i++)
	{
		cout << "Enter 10 values (" << i+1 << "/10):";
		cin >> values[i]; //0-9
	}
	cout << endl << "Mean is " << calcMean(values) << endl;
	cout << "Standard Deviation is " << calcStdDev(values) << endl;
	
	
	
	return 0;
}








