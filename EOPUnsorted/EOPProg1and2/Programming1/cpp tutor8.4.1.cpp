#include <iostream>
using namespace std;

int main () {
    int arr[5];

    //Input five integers
    cout << "Enter five integers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr + i);  //referencing variable that is i ahead of  of arr
    } 

    //Increment each integer by 2
    for (int i = 0; i < 5; ++i) {
        *(arr + i) += 2;				// *(arr + i) = *(arr + i) + 2;
    }

    //Print each integer and its location
    for (int i = 0; i < 5; ++i) {
        cout << arr + i << " " << *(arr + i) << endl;
    }

    return 0;
}
