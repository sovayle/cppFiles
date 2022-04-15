#include <iostream>
#include <string>
using namespace std;

/*
void sayHi(string name,int age)
{
	cout << "Helloooo " << name << endl;
	cout << "You are " << age << " years old.";
}
*/

double cube(double num)
{
	double result = num * num * num;
	return result;
}

int main()
{
	/*string fase = "rabbit";
	string name;
	cout << fase.length();
	bool cow = true;
	cout << "Enter Name: ";
	getline(cin, name);
	cout << "Your name is " << name << endl;
	cout << cow;
	int luckyNums[] = {0,5,10,15};
	cout << luckyNums[2]; */
	//sayHi("Softea. " , 19);
	
	double cubing =cube(4);
	cout << cubing;
	
	return 0;
}
