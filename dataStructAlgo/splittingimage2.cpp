#include <iostream>
#include <string>

using namespace std;

void split (int);

int main ()
{
    int num;
    cout << "Enter a number:";
    cin >> num;
    split (num);

    return 0;
}

void split (int x)
{
    if (x > 1)
    {	cout << x << " = ";
        cout << x/2 << "+";
        cout << x - x/2<<endl;
        split (x/2);
    } 
    return;
}
