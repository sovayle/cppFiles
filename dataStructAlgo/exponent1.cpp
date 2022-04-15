#include <iostream>
#include <string>

//iterative

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
    int ans = 1;
    for (int i=1; i<=y; ++i)
        ans *= x;

    return ans;
}

