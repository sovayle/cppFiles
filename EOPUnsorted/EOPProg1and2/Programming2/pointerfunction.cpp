#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct info
{
	string name;
	string phoneNumber;
	int bookRoom;
};

void getDetail(struct info *ptr)
{
	for (int i=0;i<3;i++)
	{
		cout << "Enter Customer name: ";
		cin >> ptr->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr->bookRoom;
		ptr++;
	}
	
}
void displayDetail(struct info *ptr)
{
	for (int i=0;i<3;i++)
	{
		cout << "Customer name is: " << ptr->name << endl;
		cout << "Customer phone number is : " << ptr->phoneNumber << endl;
		cout << "Enter Customer bookRoom: " << ptr->bookRoom << endl;
		ptr++;
	}
}

int main()
{
	info customers[5];
	getDetail(customers);
	displayDetail(customers);
	cout << "yo";
}
