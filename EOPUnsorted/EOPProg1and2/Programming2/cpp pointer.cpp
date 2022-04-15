#include <iostream>
#include <new>
using namespace std;

int main()
{
	int nums[100];
	int *nPt;
	nPt = &nums[0];
	//nPt = nums;
	for (int i =0;i<10;i++)
	{
		cout << nPt + i << endl;
	}
	// 0 1 2 3 4 5 6 7 8 9
	// A B C D E F 0 1 2 3 4
	// 5 6 7 8 9 A B C D E F
	return 0;
}
