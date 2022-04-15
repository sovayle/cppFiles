#include <iostream>
#include <cmath>
#define MAX_NUMS 10

using namespace std;

double calcMean(int nums[], int n) {
    double result = 0;
    for (int i = 0; i < n; ++i) {
        result += nums[i];
    }
    result /= n;
    return result;
}

double calcStdDev(int nums[], int n) {
    double mean = calcMean(nums, n);
    double result = 0;
    for (int i = 0; i < n; ++i) {
        result += pow(nums[i] - mean, 2);
    }
    result /= n;
    result = pow(result, 0.5);

    return result;
}

int main() {
    int vals[MAX_NUMS];

    for (int i = 0; i < MAX_NUMS; ++i) {
        cout << "Enter a value #" << i + 1 << ": ";
        cin >> vals[i];
    }

    double mean = calcMean(vals, MAX_NUMS);
    double sd   = calcStdDev(vals, MAX_NUMS);

    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}
