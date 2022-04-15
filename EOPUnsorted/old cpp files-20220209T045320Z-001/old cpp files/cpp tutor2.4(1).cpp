#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float x1,y1,x2,y2,distance;
	cout << "Program that calculates the distance between two points in a Cartesian plane." << endl << endl;
	cout << "Enter the coordinates of the first endpoint: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second endpoint: ";
	cin >> x2 >> y2;
	distance = 	sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout << setprecision(2) << fixed;
	cout << "The distance between the two points is " << distance;
	return 0;
}
