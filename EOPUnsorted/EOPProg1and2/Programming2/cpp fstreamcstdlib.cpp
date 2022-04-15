#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ofstream myWrite;
	myWrite.open("customer.txt");
	
	for (int i=0;i<5;i++)
	{
		myWrite << "test" << " " << 100 << endl;
	}
	return 0;
}

