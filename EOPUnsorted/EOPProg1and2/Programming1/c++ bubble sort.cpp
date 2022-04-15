#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[10] = {10,2,0,14,43,25,18,1,5,45};
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {         //i 0
   for(j = i+1; j<10; j++)      //j = 0+1   j = 2
   {
      if(a[j] < a[i])          //a 1 < a 0    a 2 < a 0
	  {  
	  	 cout << a[j] << " < " << a[i] << " || a" << j << " < a" << i << endl;       				
         temp = a[i];           //temp = a 0    temp = 
         a[i] = a[j];           //a 0  = a 1
         a[j] = temp;          //a 1 = temp
      }
   }
   cout << endl << endl;
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
