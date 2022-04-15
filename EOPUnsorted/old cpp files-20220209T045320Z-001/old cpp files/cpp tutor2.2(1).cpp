#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x1,y1,x2,y2,xmid,ymid;
	cout << "Program that finds the midpoint of a line segment." << endl << endl;
	cout << "Enter the coordinates of the first endpoint: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second endpoint: ";
	cin >> x2 >> y2;
	xmid = (x1 + x2)/2;
	ymid = (y1 + y2)/2;
	cout << setprecision(2) << fixed;
	cout << "The coordinates of the midpoint are (" << xmid << " , " << ymid << ")";
	return 0;
}
