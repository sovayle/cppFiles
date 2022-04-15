#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Cylinder
{
	private:
		double height;
		double radius;
	public:
		
		Cylinder(double, double);
		~Cylinder();
		void setHeight(double);
		void setRadius(double);
		double getHeight() const;
		double getRadius() const;
		
		double getArea() const;
		double getVolume() const;
};

Cylinder::Cylinder(double h, double r)
		{
			cout << "The object has been constructed." <<endl;
			height = h;
			radius = r;
	
		}
		
Cylinder::~Cylinder()
{
	cout<<"The object has been destructed.";
	
}
void Cylinder::setHeight(double h)
{
	height = h;
}

void Cylinder::setRadius(double r)
{
	radius = r;
}
	
double Cylinder::getHeight() const
{
	return height;
}

double Cylinder::getRadius() const
{
	return radius;
}

double Cylinder::getArea() const
{
	return 2*M_PI*radius*height;
}

double Cylinder::getVolume() const
{
	return M_PI*pow(radius,2)*height;
}

int main()
{
	cout << "****************************************************" <<endl;	
	cout << "This program will calculate the volume and area of a cylinder. \n";
	cout << endl;
	Cylinder ball(1,1);
	Cylinder *ptr;
	ptr = &ball;
	int y,p=1;
	string z;
	double rectHeight;
	double rectRadius;
	
	do{
		
	
	cout<<"Do you want to put 0,1,2 arguments: "<<endl;
	cin>>y;
	if(y<0||y>2)
	{
		cout<<"Invalid value"<<endl;
	
		
		
	}
	if(y==0)
	{
		ptr->setRadius(1);
		ptr->setHeight(1);
	}
	
	if(y==1)
	{
		do{
		
			cout<<"Whats the arguments whether height or radius(h or r): ";
			cin>>z;
			
		
			if(z=="h")
			{
				cout<<"The height of cylinder ,in meter : ";
				cin >> rectHeight;
				ptr->setHeight(rectHeight);
				ptr->setRadius(1);
				
			}
			if(z=="r")
			{
				cout<<"The Radius of cylinder ,in meter : ";
				cin >> rectRadius;
				ptr->setRadius(rectRadius);
				ptr->setHeight(1);
			}
		
		}while(z!="r"&&z!="h");
		
	}

	if(y==2)
	{
		cout<<"What is the height in meter ? ";
		cin >> rectHeight;
		cout << "What is the Radius in meter ? ";
		cin >> rectRadius;
		cout<<endl;
		ptr->setHeight(rectHeight);
		ptr->setRadius(rectRadius);
	
	}
	
}while(y<0||y>2);
	
	cout << "Here is the cylinder's data: \n";
	cout<<endl;
	cout<< fixed << showpoint << setprecision(2);
	cout<<setw(14)<<"Height: "<<ball.getHeight()<<" m"<<endl;
	cout<<setw(14)<<"Radius: "<<ball.getRadius()<<" m"<<endl;
	cout<<setw(14)<<"Area  : "<<ball.getArea()<<" m^2"<<endl;
	cout<<setw(14)<<"Volume: "<<ball.getVolume()<<" m^3"<<endl;
	cout<<endl;
	
	cout << "Here is the cylinder's data from the pointer: \n";
	cout<<endl;
	cout<< fixed << showpoint << setprecision(2);
	cout<<setw(14)<<"Height: "<<ptr->getHeight()<<" m"<<endl;
	cout<<setw(14)<<"Radius: "<<ptr->getRadius()<<" m"<<endl;
	cout<<setw(14)<<"Area  : "<<ptr->getArea()<<" m^2"<<endl;
	cout<<setw(14)<<"Volume: "<<ptr->getVolume()<<" m^3"<<endl;
	cout<<endl;
	
	return 0;
}




