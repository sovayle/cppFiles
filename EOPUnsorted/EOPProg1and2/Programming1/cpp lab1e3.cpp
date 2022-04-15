/**
*@author Your Name: Amirul Azim bin Amran
* Matric no: 2017425
* Lab #1 Section 3
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float subtotal,gratuity_rate,gratuity,total;
	cout << "Enter the subtotal and gratuity rate: ";
	cin >> subtotal >> gratuity_rate;
	gratuity = (subtotal*gratuity_rate)/100;
	total = subtotal + gratuity;
	cout << "The gratuity is $" << gratuity << " and total is $" << total;
	return 0;
}


















