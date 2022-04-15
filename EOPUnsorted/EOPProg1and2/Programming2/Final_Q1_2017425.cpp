/**
*Name: Amirul Azim bin Amran
*Matric no: 2017425
*Lecturer: Dr Norlia Yusof
*/ 
#include <iostream>
using namespace std;

int main()
{
	int people;
	int duration;
	double totalPrice;
	double toPay;
	cout << "Enter number of people: ";
	cin >> people;
	while(people<1 || people >9)
	{
		cout << "Invalid entry. Please enter a value between 1-9 people only" << endl;
		cout << "Enter number of people: ";
		cin >> people;
	}
	cout << "Enter duration of stay: ";
	cin >> duration;
	cout << endl;
	while(duration<1 || duration >7)
	{
		cout << "Invalid entry. Duration of stay must be at least 1 and not more than 7" <<endl;
		cout << "Enter duration of stay: ";
		cin >> duration;
		cout << endl;
	}
		
	if(people ==1 || people ==2 || people ==3)
	{
		
		if (duration==1)
		{
			cout << "No package selected." << endl;
		}
		else if(duration ==2 || duration ==3)
		{
			cout << "You have selected Package A." << endl << endl;
			totalPrice=(700.0*(96.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 4 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==4 || duration ==5)
		{
			cout << "You have selected Package B." << endl << endl;
			totalPrice=(1200.0*(94.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 6 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==6 || duration ==7)
		{
			cout << "You have selected Package C." << endl;
			totalPrice=(1800.0*(92.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 8 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}		
	}
	
	else if (people ==4 || people ==5 || people ==6)
	{
		if (duration==1)
		{
			cout << "No package selected." << endl;
		}
		else if(duration ==2 || duration ==3)
		{
			cout << "You have selected Package D." << endl;
			totalPrice=(650.0*(95.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 5 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==4 || duration ==5)
		{
			cout << "You have selected Package E." << endl;
			totalPrice=(1100.0*(93.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 7 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==6 || duration ==7)
		{
			cout << "You have selected Package F." << endl;
			totalPrice=(1700.0*(91.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 9 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}		
	}
	else
	{
		if (duration==1)
		{
			cout << "No package selected." << endl;
		}
		else if(duration ==2 || duration ==3)
		{
			cout << "You have selected Package G." << endl;
			totalPrice=(600.0*(94.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 6 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==4 || duration ==5)
		{
			cout << "You have selected Package H." << endl;
			totalPrice=(1000.0*(92.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 8 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
		else if (duration ==6 || duration ==7)
		{
			cout << "You have selected Package I." << endl;
			totalPrice=(1600.0*(90.0/100));
			toPay = totalPrice * people;
			cout << "You are given a 10 % discount on the total initial amount." << endl << endl << endl;
			cout << "The total price for each person after discount is RM " << totalPrice << endl << endl;
			cout << "The total number of people in this package is " << people << " persons" << endl << endl;;
			cout << "The total amount to be paid for this package after discount is RM " << toPay << endl;
		}
	}
	return 0;
}





