#include<iostream>
#include<limits>
using namespace std;
int main()
{

    cout << "Enter an int: ";
    int x = 0;
    while(!(cin >> x))
	{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
    cout << "You enterd: " << x << endl;        
}
