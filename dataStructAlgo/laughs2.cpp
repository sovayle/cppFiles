#include <iostream>
#include <string>

using namespace std;

void laughwithme(int);

int main ()
{
    int laughcount;

    cout << "How many times you want to laugh?";
    cin >> laughcount;

    laughwithme(laughcount);

    return 0;
}

void laughwithme (int x)
{
    if (x <= 0){
        return;
    }
    else{
        cout << "Ha ";
        laughwithme (x-1);
    }
}
