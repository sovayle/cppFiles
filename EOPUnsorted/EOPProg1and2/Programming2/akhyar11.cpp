#include <iostream>
#include <cmath>

using namespace std;
double calcMean(double value[], int n);
double calcStdDev(double value[], int n);


int main()
{
	int n;
	char decision;

	do{
		do
	  	{
	    cout << "Enter the total number of values you want to calculate: ";
	       cin >> n;
	
	       if (n>100)
	         cout<<"Invalid number" <<endl;
	
	    }while(n>100);
	
		double value[n];
	     cout <<" The value of n from the user is: "<< n <<endl;
	
	
	     for(int x=0; x<n; x++)
	
	       {
	         cout << "Enter the value of x: ";
	        cin >> value[x];
	
	        }
	
	    for(int x=0; x<n; x++)
	       {
	         cout << "Here the value of x "<<x+1<<" : ";
	        cout << value[x]<<endl;
	
	        }
	    
		cout << endl << "Mean is " << calcMean(value, n) << endl;
		cout << "Standard Deviation is " << calcStdDev(value, n) << endl; 
		cout << "Do you want to restart?";
		cin >> decision;
		while (decision != 'Y' && decision != 'y' && decision != 'N' && decision != 'n') {
			cout << "Invalid letter, try again.(Y/y to continue and N/n to stop): ";
			cin >> decision;			
		}

		
	}while(decision!= 'N' && decision!= 'n');
  	return 0;
}

double calcMean(double value[], int n){
    double mean=0;
    for(int i=0;i<n;i++)
    {
        mean += value[i];
    }
    mean = mean/n;

    return mean;
}

double calcStdDev(double value[], int n)
{
    double mean=0;
    for(int i=0;i<n;i++)
    {
        mean += value[i];
    }
    mean = mean/n;
    double standardDeviation=0;
    for(int i=0;i<n;i++)
    {
        standardDeviation += pow((value[i]-mean),2);
    }
    standardDeviation = sqrt(standardDeviation/n);
    return standardDeviation;
}
