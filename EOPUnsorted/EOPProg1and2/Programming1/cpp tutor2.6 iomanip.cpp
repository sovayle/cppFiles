#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;
	float unit_price = 3.50;
	float total_price;
	cout << setw(29) << setfill('*') << '*' << endl;
	cout << "  Makcik's Tasty Apam Balik" << endl << endl;
	cout << "Quantity..........:         ";
	cin >> quantity;
	cout << setprecision(2) << fixed;
	total_price = quantity*unit_price;
	cout << "Unit price.......: RM   " << unit_price << endl;
	cout << setw(29) << setfill('-') << '-' << endl;
	cout << "Total price.......: RM  " << total_price << endl << endl;
	cout << "Thank you, please come again!" << endl;
	cout << setw(29) << setfill('*') << '*' << endl;
	
	return 0;
}










