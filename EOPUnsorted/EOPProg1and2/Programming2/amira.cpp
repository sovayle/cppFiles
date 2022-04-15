#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calc_PI(double j);


int main ()
{
	int n;
	double j;
	cout << "insert n" << endl;
	cin >> n;
	calc_PI(n);
	cout << setprecision(4)  << calc_PI(n);
	
	return 0;
	
}

double calc_PI(double j)
{
	double PI;
	int i;
	for (i=0;i<=j; i++)
		{
		PI = 4.0*((pow(-1,i))/((2.0*i)-1));
		}
		
	return PI;
}




