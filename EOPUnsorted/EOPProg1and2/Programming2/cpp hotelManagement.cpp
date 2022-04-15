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
int globalCount=0;

void hotelInfo(int );
void checkIn(info customer[],int rooms[], int maximumDay, int arr[5][2], info *ptr1, info *ptr2, info *ptr3, info *ptr4, info *ptr5);
void hotelInfo(info customer[]);
void checkOut(info customer[],int rooms[], int arr[5][2], info *ptr1, info *ptr2, info *ptr3, info *ptr4, info *ptr5);
int dateCalculate(int day, int &month, int arr[5][2]);

int dateCalculate(int day, int &month, int arr[][2])
{
	int until;
	if(day+arr[0][0]>31)
	{
		until = (day + arr[0][0])-31;
		if(month=12)
		{
			month=1;
			return until;
		}
		else
		{
			month = month+1;
		}
	}
	else
	{
		until = day + arr[0][0];
		return until;
	}

}

int main()
{
	int choice, day, month, maximumDay=0;
	int arr[5][2]; 								//2d array to display rooms booked
	int rooms[5]={101,102,103,104,105};
	info customers[5];
	info *ptr1 = &customers[0], *ptr2 = &customers[1], *ptr3 = &customers[2], *ptr4 = &customers[3], *ptr5 = &customers[4];
	cout << setw(40) << setfill('*') << '*' << endl;
	cout << "Welcome To The Hotel Management System!" << endl << endl;
	cout << "Enter today's date." << endl;
	cout << "Enter day of the month(1-31): ";
	cin >> day;
	while(day<1 || day >31)
	{
		cout << "Invalid day number." << endl;
		cout << "Enter day number(1-31): ";
		cin >> day;
	}
	cout << "Enter month number(1-12): ";
	cin >> month;
	while(month<1 || month >12)
	{
		cout << "Invalid month number." << endl;
		cout << "Enter month number(1-12): ";
		cin >> month;
	}
	int temp=month;
	cout << "Today's date is " << day << '-' << month << '-' << "2021" << endl << endl;
	
	//initialize 0 for all rooms data
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<2;j++)
		{
			arr[i][j]=0;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		arr[i][0]=day;
	}
	
	//initialize blank for all customer info
	for (int i=0;i<5;i++)
	{
		customers[i].name="blank";
		customers[i].phoneNumber="blank";
		customers[i].bookRoom=0;
	}
	
	while(true)
	{
		cout << "1.Check Available rooms" << endl;
		cout << "2.Check-in Customer" << endl;
		cout << "3.Customer Info" << endl;
		cout << "4.Check-out Customer" << endl;
		cout << "5.Rooms booked" << endl;
		cout << "6.Exit" << endl << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	
		if (choice==1)
		{
			hotelInfo(rooms);
			cout << endl << endl;
		}
		else if(choice==2)
		{
			checkIn(customers, rooms, maximumDay, arr, ptr1, ptr2, ptr3, ptr4, ptr5);
			cout << "Successfully checked-in! " << endl << endl;
			globalCount++;
		}
		else if(choice==3)
		{
			if(customers[0].name!="blank")
			{
				hotelInfo(customers);
				cout << "Customer will stay until " << dateCalculate(day,month,arr) << '-';
				cout << month << '-' << "2021" << endl << endl;
			}
			else
			{
				cout << "There are no customers yet!" << endl << endl;
			}
		}
		else if(choice==4)
		{
			checkOut(customers, rooms, arr, ptr1, ptr2, ptr3, ptr4, ptr5);
		}
		else if(choice==5)
		{
			if(customers[0].name!="blank")
			{
				cout << endl;
				cout << "Room\t\t" << "Book Date\t" << "Length of stay(days)\t" << "Room booked until" << endl;
				cout << "----------------------------------------------------------------------------------------" << endl;
				for (int i=0;i<globalCount;i++)
				{
					cout << customers[i].bookRoom << "\t\t";
					cout << day << '-' << month << '-' << "2021\t\t";
					cout << arr[i][0] << "\t\t";
					cout << dateCalculate(day,month,arr) << '-';
					cout << month << '-' << "2021" << endl;
					cout << endl;
					month=temp;
				}
				cout << endl;
			}
			else
			{
				cout << "No booms have been booked yet!" << endl << endl;
			}
		}
		else if(choice==6)
		{
			break;
		}
		else {
			cout << "Invalid" << endl << endl;
		}
	}
	
	cout << "Thanks for using the hotel management system!" << endl;
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
	cout << endl << "(Rooms displayed as 0 are not available)";
}

void checkIn(info customer[], int rooms[], int maximumDay, int arr[5][2], info *ptr1, info *ptr2, info *ptr3, info *ptr4, info *ptr5)
{
   	static int count=1;
   	cout << "*Checking-in Customer number " << count << "*" << endl;
   	if(count=1)
   	{
   		cout << "Enter Customer name: ";
		cin >> ptr1->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr1->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr1->bookRoom;
		cout << "Length of stay (maximum of 10 days): ";
		cin >> maximumDay;
		arr[0][0]=maximumDay;
	}
	else if(count=2)
   	{
   		cout << "Enter Customer name: ";
		cin >> ptr2->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr2->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr2->bookRoom;
		cout << "Length of stay (maximum of 10 days): ";
		cin >> maximumDay;
		arr[1][0]=maximumDay; 
	}
	else if(count=3)
   	{
   		cout << "Enter Customer name: ";
		cin >> ptr3->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr3->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr3->bookRoom;
		cout << "Length of stay (maximum of 10 days): ";
		cin >> maximumDay;
		arr[2][0]=maximumDay; 
	}
	else if(count=4)
   	{
   		cout << "Enter Customer name: ";
		cin >> ptr4->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr4->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr4->bookRoom;
		cout << "Length of stay (maximum of 10 days): ";
		cin >> maximumDay;
		arr[3][0]=maximumDay;
	}
	else
   	{
   		cout << "Enter Customer name: ";
		cin >> ptr5->name;
		cout << "Enter Customer phone number: ";
		cin >> ptr5->phoneNumber;
		cout << "Enter Customer bookRoom: ";
		cin >> ptr5->bookRoom;
		cout << "Length of stay (maximum of 10 days): ";
		cin >> maximumDay;
		arr[4][0]=maximumDay;
	}
	while(ptr1->bookRoom <101 || ptr1->bookRoom>105)
	{
		cout << "Room not available." << endl;
		cout << "Enter Customer " << count << "bookRoom: ";
		cin >> ptr1->bookRoom;
	}
	if(ptr1->bookRoom=101)
	{
		rooms[0]=0;
	}
	else if(ptr2->bookRoom=102)
	{
		rooms[1]=0;
	}
	else if(ptr3->bookRoom=103)
	{
		rooms[2]=0;
	}
	else if(ptr4->bookRoom=104)
	{
		rooms[3]=0;
	}
	else if(ptr5->bookRoom=105)
	{
		rooms[4]=0;
	}	
	count++;
}

void hotelInfo(info customer[])
{
	int choose;
	cout << "Which customer information do you want to check?" << endl;
	cout << "Customer number: ";
	cin >> choose;
	cout << "Customer " << choose << "'s name is " << customer[choose-1].name << endl;
	cout << "Customer " << choose << "'s phone number is " << customer[choose-1].phoneNumber << endl;
	cout << "Customer " << choose << "'s room is " << customer[choose-1].bookRoom << endl;
}

void checkOut(info customer[], int rooms[], int arr[5][2], info *ptr1, info *ptr2, info *ptr3, info *ptr4, info *ptr5)
{
	int choose;
	cout << "Which customer information do you want to remove?" << endl;
	cout << "Customer number: ";
	cin >> choose;
	cout << "Customer " << choose << "'s information has been removed." << endl << endl;
	while(choose<1 || choose>5)
	{
		cout << "Unknown number.Please enter number from 1-5" << endl;
		cout << "Customer number: ";
		cin >> choose;
	}
	if(choose=1)
	{
		ptr1->name= "blank";
		ptr1->phoneNumber= "blank";
		ptr1->bookRoom=0;
		rooms[0]=101;
		arr[0][0]=0;
	}
	else if(choose=2)
	{
		ptr2->name= "blank";
		ptr2->phoneNumber= "blank";
		ptr2->bookRoom=0;
		rooms[1]=102;
		arr[1][0]=0;
	}
	else if(choose=3)
	{
		ptr3->name= "blank";
		ptr3->phoneNumber= "blank";
		ptr3->bookRoom=0;
		rooms[2]=103;
		arr[2][0]=0;
	}
	else if(choose=4)
	{
		ptr4->name= "blank";
		ptr4->phoneNumber= "blank";
		ptr4->bookRoom=0;
		rooms[3]=104;
		arr[3][0]=0;
	}
	else
	{
		ptr5->name= "blank";
		ptr5->phoneNumber= "blank";
		ptr5->bookRoom=0;
		rooms[4]=105;
		arr[4][0]=0;
	}
}

/* Loops and user input 				ok
 Functions void							ok
 Functions value-returned				ok
 Function overloading					ok
 Strings								ok
 1D arrays								ok
 2D arrays								ok
 Pointers								ok
 Files and/or data structure			ok
 bonus: iomanip 						ok	*/
