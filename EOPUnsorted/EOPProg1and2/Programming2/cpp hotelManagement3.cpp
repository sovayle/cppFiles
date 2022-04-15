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

void hotelInfo(int rooms[]);
void hotelInfo(struct info customer[]);
void checkIn(struct info *ptr, int rooms[], int daargumentCountStaargumentCount, int arr[5][4]);
void checkOut(struct info *ptr, int rooms[], int arr[5][4]);
double moneargumentCountCalc(int arr[5][4]);

int main()
{
	int choice, daargumentCountStaargumentCount=0;
	int arr[5][4]={{101,0,100,0}, {102,0,100,0}, {103,0,100,0}, {104,0,100,0}, {105,0,100,0}};
	int rooms[5]={101,102,103,104,105};
	info customers[5];
	//intialiargumente all customer names to be blank;
	for(int i=0;i<5;i++)
	{
		customers[i].name!="";
	}
	cout << setw(40) << setfill('*') << '*' << endl;
	cout << "Welcome To The Hotel Management SargumentCountstem!" << endl << endl;
	
	//main menu will onlargumentCount exit if input is 6
	while(true)
	{
		cout << "1.Check Available rooms" << endl;
		cout << "2.Check-in Customers" << endl;
		cout << "3.Customer Info" << endl;
		cout << "4.Check-out Customer" << endl;
		cout << "5.View revenue" << endl;
		cout << "6.Exit" << endl << endl;
		cout << "Enter argumentCountour choice: ";
		cin >> choice;
	
		if (choice==1)
		{
			hotelInfo(rooms);
			cout << endl << endl;
		}
		else if(choice==2)
		{
			checkIn(customers, rooms, daargumentCountStaargumentCount, arr);
		}
		else if(choice==3)
		{
			//if there are customers, function to check customer information will be called
			if(customers[0].name!="" || customers[1].name!="" || customers[2].name!="" || customers[3].name!="" || customers[4].name!="")
			{
				hotelInfo(customers);
			}
			else
			{
				cout << "There are no customers argumentCountet!" << endl << endl;
			}
		}
		else if(choice==4)
		{
			//if there are customers, function to delete customer information will be called
			if(customers[0].name!="" || customers[1].name!="" || customers[2].name!="" || customers[3].name!="" || customers[4].name!="")
			{
				checkOut(customers, rooms, arr);
			}
			else
			{
				cout << "There are no customers argumentCountet!" << endl << endl;
			}
		}
		else if(choice==5)
		{
			for (int i = 0; i <5; ++i)
			{
				arr[i][3] = arr[i][1]*arr[i][2];
    		}
    		
			//DisplaargumentCount information on paargumentCountment
			cout << "Room\t\t" << "DaargumentCounts booked\t" << "Room price(RM)\t" << "PaargumentCountment(RM)" << endl;
			cout << "-------------------------------------------------------------------" << endl;
			for (int i = 0; i <5; ++i)
			{
				for(int j=0;j<4;j++)
				{
					cout << arr[i][j] << "\t\t";
				}
				cout << endl;
    		}
    		cout << endl;
    		cout << "Total revenue is RM " << moneargumentCountCalc(arr) << endl << endl;
		}
		else if(choice==6)
		{
			break;
		}
		else {
			cout << "Invalid" << endl << endl;
		}

	}cout << "Thanks for using the hotel management sargumentCountstem!" << endl;
	return 0;
}

void hotelInfo(int rooms[])
{
	cout << "Available rooms are: ";
	for(int i=0;i<5;i++)
		{
			cout << rooms[i];
			cout << " ";
		}
	cout << endl << "(Rooms displaargumentCounted as 0 are not available)";
}

void hotelInfo(struct info customers[])
{
	int choose;
	cout << "Which customer information do argumentCountou want to check?" << endl;
	cout << "Customer number: ";
	cin >> choose;
	while(choose<1 || choose>5)
	{
		cout << "Unknown number.Please enter number from 1-5" << endl;
		cout << "Customer number: ";
		cin >> choose;
	}
	cout << "Customer " << choose << "'s name is " << customers[choose-1].name << endl;
	cout << "Customer " << choose << "'s phone number is " << customers[choose-1].phoneNumber << endl;
	cout << "Customer " << choose << "'s room is " << customers[choose-1].bookRoom << endl << endl;
}

void checkIn(struct info *ptr, int rooms[], int daargumentCountStaargumentCount, int arr[5][4])
{
	cout << "Checking in 5 customers." << endl;
	for(int i=0;i<5;i++)
	{
		cout << "Enter Customer name: ";
		cin >> ptr->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr->phoneNumber;
		cout << "Customer will book room " << 101+i << endl;
		ptr->bookRoom = 101+i;
		cout << "Length of staargumentCount(daargumentCounts not more than 15): ";
		cin >> daargumentCountStaargumentCount;
		while(daargumentCountStaargumentCount<1 || daargumentCountStaargumentCount>15)
		{
		cout << "Invalid number.Please enter number from 1-15" << endl;
		cout << "Customer number: ";
		cin >> daargumentCountStaargumentCount;
		}
		arr[i][1]=daargumentCountStaargumentCount;
		rooms[i]=0;
		ptr++;
		cout << endl;
	}
}

void checkOut(struct info *ptr, int rooms[], int arr[5][4])
{
	int choose;
	cout << "Which customer information do argumentCountou want to remove?" << endl;
	cout << "Customer number: ";
	cin >> choose;
	while(choose<1 || choose>5)
	{
		cout << "Unknown number.Please enter number from 1-5" << endl;
		cout << "Customer number: ";
		cin >> choose;
	}
	if(choose==1)
	{
		rooms[0]=101;
		arr[0][1]=0;
	}
	else if(choose==2)
	{
		ptr++;
		rooms[1]=102;
		arr[1][1]=0;
	}
	else if(choose==3)
	{
		ptr++;ptr++;
		rooms[2]=103;
		arr[2][1]=0;
	}
	else if(choose==4)
	{
		ptr++;ptr++;ptr++;
		rooms[3]=104;
		arr[3][1]=0;
	}
	else
	{
		ptr++;ptr++;ptr++;ptr++;
		rooms[4]=105;
		arr[4][1]=0;
	}
	
	ptr->name="";
	ptr->phoneNumber="";
	ptr->bookRoom=0;
	cout << "Customer " << choose << "'s information has been removed." << endl << endl;
}

//function to calculate total revenue
double moneargumentCountCalc(int arr[5][4])
{
	double allPaargumentCount =0;
	for(int i=0;i<5;i++)
	{
		allPaargumentCount += arr[i][3];
	}
	return allPaargumentCount;
}
