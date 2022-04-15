#include <iostream>
using namespace std;
int main()
{
	int halfDollar,quarter,nickel,penny,cents;
	/*halfDollar=50; (cents)
	quarter=25; (cents)
	nickel=5; (cents)
	penny=1; (cents) */
	cout << "Type in your cents: ";
	cin >> cents;
	halfDollar=cents/50;
	quarter=(cents-(halfDollar*50))/25;
	nickel=(cents-(halfDollar*50)-(quarter*25))/5;
	penny=cents-(halfDollar*50)-(quarter*25)-(nickel*5);
	cout << halfDollar << " half-dollars," << quarter << " quarter," << nickel << " nickel," << penny << " pennies.";
	return 0;
}
