#include<iostream>
#include<iomanip>
using namespace std;

//Class Starts
class FreezerTemp
{
    //Data Memebr to store the minute and hour
    private:
    float hours;
    int minutes;
    
    //Member Function
    public:
    void getdata();
    float ConvertMinutes();
    float calculate();
    FreezerTemp(float h = 0.00, int m = 0){
        hours = h;
        minutes = m;
    }
    float getHours() const;
};  //End of the class

float FreezerTemp::getHours() const
{
	return hours;
}

//Member Function to take minutes and hours

void FreezerTemp::getdata()
{
    for(;;)
    {
        cout<<"Please Input the Minutes ( 0 to 59 ) : ";
        cin>>minutes;
        //Check minutes between 0 to 59
        if(minutes >=0 && minutes<=59)
        {
            break;
        }
        else
        {
            cout<<"Please Input the Valid Minutes\n";
            continue;
        }
    }
    
    cout<<"Please Input the Hours : ";
    cin>>hours;
}


//Member Function to convert the minutes to hours
float FreezerTemp::ConvertMinutes()
{
    float temp = minutes * 0.0166667;       //converting minutes to hours
    hours = hours + temp;                   //Add the converted hours to hours to find the total hours
    return hours;
}

//Member Function to Calculate Freezer Temperature
float FreezerTemp::calculate()
{
    float reading;
    reading = (((4.00 * hours * hours)/(hours + 2.00)) - 20.00);
    return reading;
}

//driver Code
int main()
{
	int i,j;
	FreezerTemp temp[1];
    //Array of 10 objects
    FreezerTemp Temperature[10];
    //Input the hours and minutes for 10 objects
    cout<<"Please Input the Minutes and Hours for 10 Objects : "<<endl;
    for(int i =0;i<10;i++)
    {
        Temperature[i].getdata();
    }
    
    //Converts time to hours and calculates temperatures
    for(int i =0;i<10;i++)
    {
        Temperature[i].ConvertMinutes();        //Convert minutes to hours
        Temperature[i].calculate();				//Calculate temperature
    }
    
    cout<<endl;
    
    //bubble sort
    for(i=1;i<10;++i)
	{
		for(j=0;j<(10-i);++j)
			if(Temperature[j].getHours()>Temperature[j+1].getHours())
			{
				temp[0]=Temperature[j];
				Temperature[j]=Temperature[j+1];
				Temperature[j+1]=temp[0];
			}
	}
	
	
    //Display the hours and minutes in ascending order and Temperature
    cout<<"Display the hours and minutes in ascending order and Temperature "<<endl;
    for(int i =0;i<10;i++)
    {
        cout<<"Time in hours:"<<Temperature[i].ConvertMinutes()<<endl;        //Convert minutes to hours
        cout<<"Temperature :"<<fixed<<setprecision(4)<<Temperature[i].calculate()<<endl<<endl;
    }
 
    return 0;
}

