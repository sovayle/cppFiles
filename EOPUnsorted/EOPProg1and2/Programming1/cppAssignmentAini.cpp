#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const float pi = 3.14159;
	int choice;
	float x1, x2, y1, y2, r1, r2, theta1, radian, degree;
	char decision;
	
	do{
		cout << "--------------------************--------------------" << endl;
		cout << "1. Convert Cartesian to Polar coordinates" << endl;
		cout << "2. Convert Polar to Cartesian coordinates" << endl << endl;
	
		cout << "Please enter your choice, 1 or 2: ";
		cin >> choice;
		while (choice != 1 && choice != 2 ) {
			cout << "Invalid number try again, 1 or 2: ";
			cin >> choice;			
		}
		cout << endl;
		
		if(choice==1)
		{
			cout << " Converting Cartesian to Polar coordinates" << endl;
			cout << "-------------------------------------------" << endl;
			cout << " Enter x coordinate: ";
			cin >> x1;
			cout << " Enter y coordinate: ";
			cin >> y1;
			if ( (x1 > 0) && (y1 > 0) ) {
			cout << "\n This point is in the first quadrant." << endl << endl;
			}
			else if ( (x1 < 0) && (y1 > 0) ) {
			cout << "\n This point is in the second quadrant." << endl << endl;
			}
			else if ( (x1 < 0) && (y1 < 0) ) {
			cout << "\n This point is in the third quadrant." << endl << endl;
			}
			else if ( (x1 > 0) && (y1 < 0) ) {
			cout << "\n This point is in the fourth quadrant." << endl << endl;
			}
			else if ( (x1 > 0) || (x1 < 0) && (y1 == 0) ) {
			cout << "\n This point is on the x-axis. " << endl << endl ;
			}
			else {
			cout << "\n This point is on the y-axis. " << endl << endl ;
			}
			r1 = sqrt ( (x1 * x1) + (y1 * y1) ) ;
			theta1 = atan2(y1,x1);
			if(theta1<(-pi/2)){
				theta1=theta1+2*pi;
			}
			else if(theta1>=(-pi/2) && theta1<0){
				theta1=theta1+pi;
			}
			cout << setiosflags(ios::fixed) << setprecision(3);
			cout << " Cartesian coordinate (" << x1 << ", " << y1 << ") is equal to" << endl;
			cout << " Polar coordinate (" << r1 << ", " << theta1 << ")." << endl << endl;
		}
		else {
			cout << " Converting Polar to Cartesian coordinates" << endl;
			cout << "-------------------------------------------" << endl;
			cout << " Enter radius: "  ;
			cin >> r2 ;
			while (r2<0 ) {
			cout << "Please enter a positive number for radius: ";
			cin >> r2;			
		}
			cout << " Enter angle in radian (3 d.p.): "  ;
			cin >> radian ;
			
			//Formula choice 2
			x2 = r2 * cos (radian) ;
			y2 = r2 * sin (radian) ;
			
			if ( (x2 > 0) && (y2 > 0) ) {
			cout << "\n This point is in the first quadrant." << endl << endl;
			}
			else if ( (x2 < 0) && (y2 > 0) ) {
			cout << "\n This point is in the second quadrant." << endl << endl;
			}
			else if ( (x2 < 0) && (y2 < 0) ) {
			cout << "\n This point is in the third quadrant." << endl << endl;
			}
			else if ( (x2 > 0) && (y2 < 0) ) {
			cout << "\n This point is in the fourth quadrant." << endl << endl;
			}
			else if ( (x2 > 0) || (x2 < 0) && (y2 == 0) ) {
			cout << "\n This point is on the x-axis. " << endl << endl ;
			}
			else  {
			cout << "\n This point is on the y-axis. " << endl << endl ;
			}
			if(x2<0){
				x2=0;
			}
			if(y2<0){
				y2=0;
			}
			cout << setiosflags(ios::fixed) << setprecision(3) ;
			cout << " Polar coordinate (" << r2 << ", " << radian << ") is equal to" << endl;
			cout << " Cartesian coordinate (" << x2 << ", " << y2 << ")." << endl << endl;
		}
	
		cout << "--------------------************--------------------" << endl;
		cout << "Do you want to do another conversion?" << endl;
		cout << "Type 'y' for yes; 'n' for no: ";
		cin >> decision;
		while (decision != 'Y' && decision != 'y' && decision != 'N' && decision != 'n') {
			cout << "Invalid letter, try again.(Y/y to continue and N/n to stop): ";
			cin >> decision;			
		}
	}while(decision!= 'N' && decision!= 'n');
	
	
	return 0;
}






