#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int sizearr=321;
    double arr[sizearr];
    double f_final,x=1;



    cout << "f(x)= sin(x) + log(x)" << endl;
    cout << "x" <<"\t |\t "<<"fx"<< endl;
    cout << "----------------------"<< endl;

   for (int xp=1; xp<sizearr; xp+=1)
   {
       arr[xp]= sin(x)+log(x);
       cout<< x <<"\t |\t"<< arr[xp] <<endl;
        x+=0.5;

   }
     for (int xp=1; xp<101; xp+=1)
       {
         if (arr[xp]>arr[0])

             x+=0.5;
             arr[0]=arr[xp];
        }
     for (int xp=1; xp<sizearr; xp+=1)
     {
         f_final=arr[0]-arr[xp];
     }
   cout << "Highest value of the first 100 fx = " << arr[0] << endl;
   cout << "The f_final is " << f_final << endl;
}
