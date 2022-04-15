#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	cout << "1.1 Generate All values of fx for all x" << endl << endl;
	int xp;
    int sizearr=320;
    double arr[sizearr];
    double x=1;
    double xUser;

    cout << "f(x)= sin(x) + log(x)" << endl;
    cout << "x" <<"\t |\t "<<"fx"<< endl;
    cout << "----------------------"<< endl;

   for (xp=0; xp<sizearr; xp++)
   {
       arr[xp]= sin(x)+ log10(x);
       cout<< x <<"\t |\t"<< arr[xp] <<endl;
	   x+=0.5;

   }	
   
    cout << endl;
    x=1; xp=0;
	cout << "1.2 Generate values of fx for range x given by user" << endl << endl;
    cout << "Please enter the range of x (1-160.5): ";
    cin >> xUser;

    while (xUser<1 || xUser>160.5)
    {
       cout << "the range is invalid" <<endl << endl;
       cout << "Please enter the range of x (1-160.5): ";
	   cin >> xUser;
    }

	for (double count=1; count<=xUser; count += 0.5)
   {
       arr[xp]= sin(x)+ log10(x);
       cout<< x <<"\t |\t"<< arr[xp] <<endl;
	   x+=0.5;
	   xp++;

   }

}
