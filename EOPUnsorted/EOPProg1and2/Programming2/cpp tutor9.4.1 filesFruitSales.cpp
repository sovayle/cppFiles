#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main () {
	int i;
    ifstream inFile;
    inFile.open("fruit_sales.txt");

    if (inFile.fail()) {
        cout << "File open failed!";
        return 0;
    }

    struct fruit {
        string name;
        int kgs;
    };

    fruit arr[5];

    for (i = 0; i < 5; ++i) {
        inFile >> arr[i].name >> arr[i].kgs;
        //arr[i].name.erase(remove(arr[i].name.begin(), arr[i].name.end(), ','), arr[i].name.end());
        arr[i].name.erase(arr[i].name.end()-1);
    }
    inFile.close();

    for (int i = 0; i < 5; ++i) {
        int x;
        cout << "Enter kgs of " << arr[i].name << " sold today: ";
        cin >> x;
        arr[i].kgs += x;
    }

    ofstream outFile;
    outFile.open("fruit_sales.txt");

    if (outFile.fail()) {
        cout << "File open failed!";
        return 0;
    }

    for (int i = 0; i < 5; ++i) {
        outFile << setw(12) << left << arr[i].name << arr[i].kgs << endl;
    }

    cout << "Sales saved to file" << endl;
    return 0;

}
