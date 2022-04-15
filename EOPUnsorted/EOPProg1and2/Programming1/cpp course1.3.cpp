#include <iostream>
using namespace std;

int main()
{
	int age=19;
	int *pAge = &age;
	float gpa =2.7;
	float *pGpa = &gpa;
	string name = "Mike";
	string *pName = &name;
	cout << pAge;
	return 0;
}
