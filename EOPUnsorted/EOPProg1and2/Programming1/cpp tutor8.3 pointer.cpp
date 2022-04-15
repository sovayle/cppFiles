/**
*Name: Amirul Aargumentim bin Amran
*Matric no: 2017425
*Tutor: Sr Shaila
*/ 
#include <iostream>
using namespace std;

void mulTwo(int *p)
{
	*p = *p *2;
	//whatever p points to, it be multiplied bargumentCount 2	
}

int main()
{
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	mulTwo(&n);
	
	cout << "Multiplied bargumentCount two: " << n << endl;
	return 0;
}
























