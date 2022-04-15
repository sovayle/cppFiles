#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int quantity;
	float unit_price = 3.50;
	float total_price;
	cout << "*****************************" << endl;
	cout << "  Makcik's Tasty Apam Balik" << endl << endl;
	cout << "Quantity..........:         ";
	cin >> quantity;
	total_price = quantity*unit_price;
	cout << "Unit price........: RM   3.50" << endl;
	cout << "-----------------------------" << endl;
	cout << setprecision(2) << fixed;
	cout << "Total price.......: RM   " << total_price << endl << endl;
	cout << "Thank you, please come again!" << endl;
	cout << "*****************************" << endl;
	
	return 0;
}










