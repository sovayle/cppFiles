#include <iostream>
#include <string>

using namespace std;

void laughwithme (int);

int main (){
        
    int laughcount;

    cout << "How many times you want to laugh?";
    cin >> laughcount;

    laughwithme(laughcount);

    return 0;
}

void laughwithme (int x)
{
    for (int i=1; i<=x; ++i)
        cout << "Ha ";

    cout << endl;
}
