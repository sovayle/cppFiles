#include <iostream>
using namespace std;

int main() 
{
	float capacity,miles,milesWithoutRefuel;
	cout << "Program that calculates number of miles automobile can be driven without refueling." << endl << endl;
	cout << "Enter capacity of automobile fuel tank (in gallons): ";
	cin >> capacity;
	cout << "Enter miles that can be driven per gallon: ";
	cin >> miles;
	milesWithoutRefuel = capacity*miles;
	cout << "Number of miles automobile can be driven without refueling is " << milesWithoutRefuel << " miles." << endl;
	return 0;
}
