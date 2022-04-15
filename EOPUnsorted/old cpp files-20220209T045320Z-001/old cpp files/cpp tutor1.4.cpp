/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

int main()
{
	float subTotal,tax,serviceCharge,total;
	cout << "Program to calculate the total restaurant bill." << endl << endl;
	cout << "Enter the subtotal: ";
	cin >> subTotal;
	cout << "The tax is 7% of the subtotal and the service charge is 5% of the subtotal." << endl;
	tax = subTotal*(7.0/100.0);
	cout << "The tax is " << tax << endl;
	serviceCharge = subTotal*(5.0/100.0);
	cout << "The serviceCharge is " << serviceCharge << endl;
	total = subTotal+tax+serviceCharge;
	cout << "The total is " << total << ".";
	
	
	
	return 0;
}
