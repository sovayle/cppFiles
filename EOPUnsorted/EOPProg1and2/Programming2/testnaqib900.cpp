#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int sizearr=321;
    double arr[sizearr];
    double x=1,fx;
    double r1,r2,range1,range2;
    char m;

    cout << "f(x)= sin(x) + log(x)" << endl;
    cout << "x" <<" "  << endl;

   for (int count=1; count<sizearr; count+=0.5)
   {
       cout<< count << "\t x" << x <<"\t " <<endl;
        x+=0.5;

   }
	
	return 0;
}
