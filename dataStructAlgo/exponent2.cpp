#include <iostream>
#include <string>

//recursive

using namespace std;

int power (int, int);

int main ()
{
    int num, pwr;
    cout << "Enter number:";
    cin >> num;
    cout << "Enter pwr:";
    cin >> pwr;

    cout << "Number "<< num<<" to the power of "<< pwr; 
    cout << " is "<< power (num, pwr)<<endl;

    return 0;
}

int power (int x, int y)
{
    if (y == 0)
    return 1;
    else
    return x * power (x, y-1);
}
