#include <iostream>
using namespace std;

int main(){
    float price, sales;
    int quantity;
    cout << "Enter price: ";
    cin>> price;
    cout<< "Enter quantity sold: ";
    cin >> quantity;
    sales = price* quantity;
    cout << "Amount of sales is: " <<sales <<endl;
    return 0;
}