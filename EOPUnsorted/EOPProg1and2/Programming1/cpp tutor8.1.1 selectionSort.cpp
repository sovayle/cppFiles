#include <iostream>
#define MAX_NUM 10
using namespace std;

void swap (int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int arr[MAX_NUM];										 //10 indexes in arr[]
	//6 3 0 2 7 8 4
    cout << "Enter ten integers : ";
    for (int i = 0; i < MAX_NUM; ++i) { 					//i=0 i<10 (does it 10 times)
        cin >> arr[i];
    }

    //Selection sort to sort integers in ascending order
    for (int i = 0; i < MAX_NUM - 1; ++i) {   				//i=0 i < 9 (does it 9 times)
        int min_val = arr[i];  								//min value is for the meantime,arr 0 then arr 1 then arr 2...
        int min_ind = i;									//min ind is index for 0 then arr 1 then arr2
        for (int j = i; j < MAX_NUM; ++j) {				//loop j = 0 for 9 times
            if (arr[j] < min_val) {						//checking for minimum value in list at j=1 3 is min so min ind is now 1 and vlaue is 3 
														//for j=2 min ind is now 2 and value is 0
                min_ind = j;
                min_val = arr[j];
            }											//first exit with min ind=2 and value is 0
        }
        swap(arr[i], arr[min_ind]);						//swap arr[0] with arr[2]  =  0 3 6 2 7 8 4
    }													//loop for the other indexes

    cout << "Sorted integers    : ";
    for (int i = 0; i < MAX_NUM; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
