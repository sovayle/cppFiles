#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	float cow=932.434343;
	cout << "yo" << endl;
	cout << setw(10) << setfill('*') << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << cow;
	
	cout << setw(29) << setfill('*') << endl;
	cout << setprecision(2) << fixed;
	
	std::cout << std::setw(10);
	std::cout <<546<< std::endl;
	
	cout << setw(10) << setiosflags(ios::fixed) << setiosflags(ios::fixed) << setprecision(4);
	return 0;
}
