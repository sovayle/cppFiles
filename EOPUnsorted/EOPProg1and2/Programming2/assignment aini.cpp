// Part A : Polar Coordinates
# include <iostream>
# include <conio.h>
# include <cmath>
# include <iomanip>

using namespace std ;

int main ()
{
	// declaration
	const float pi = 3.14159;
	int choice ;
	char yes = 'y';
	float x1, x2, y1, y2, r1, r2, theta1, radian, degree ;
	
	while ( yes == 'y' ) 
	{
		cout << "\n--------------------************--------------------" <<endl;
		cout << "1. Convert Cartesian to Polar coordinates" << endl ;
		cout << "2. Convert Polar to Cartesian coordinates" << endl ;
		cout << "\nPlease enter your choice, 1 or 2: "  ;
		cin >> choice ;
		
		if ( choice == 1 ) 
		{
			// Cartesian to Polar coordinates (choice 1)
			cout << "\n Converting Cartesian to Polar coordinates" << endl ;
			cout << "-------------------------------------------" << endl ;
			cout << " Enter x coordinate: "  ;
			cin >> x1  ;
			cout << " Enter y coordinate: "  ;
			cin >> y1 ;
			
			if ( (x1 > 0) && (y1 > 0) ) {
			cout << "\n\n This point is in the first quadrant." << endl << endl;
			}
			else if ( (x1 < 0) && (y1 > 0) ) {
			cout << "\n\n This point is in the second quadrant." << endl << endl;
			}
			else if ( (x1 < 0) && (y1 < 0) ) {
			cout << "\n\n This point is in the third quadrant." << endl << endl;
			}
			else if ( (x1 > 0) && (y1 < 0) ) {
			cout << "\n\n This point is in the fourth quadrant." << endl << endl;
			}
			else if ( (x1 > 0) || (x1 < 0) && (y1 == 0) ) {
			cout << "\n\n This point is on the x-axis. " << endl << endl ;
			}
			else  {
			cout << "\n\n This point is on the y-axis. " << endl << endl ;
			}

			//formula choice 1
			r1 = sqrt ( (x1 * x1) + (y1 * y1) ) ;
			theta1 = atan2 ( y1, x1) ;
			cout << setiosflags(ios::fixed) << setprecision(3) ;

			cout << " Cartesian coordinate (" << x1 << ", " << y1 << ") is equivalent to Polar coordinate (" << r1 << ", " << theta1 << ")." << endl ;

		}


	else if ( choice == 2) 
		{	    
			// Polar to Cartesian coordinates (choice 2)
			cout << "\n Converting Polar to Cartesian coordinates" << endl ;
			cout << "-------------------------------------------" << endl ;
			cout << " Enter radius: "  ;
			cin >> r2 ;
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

			cout << setiosflags(ios::fixed) << setprecision(3) ;
			cout << " Polar coordinate (" << r2 << ", " << radian << ") is equal to Cartesian coordinate (" << x2 << ", " << y2 << ")." ;
		
		}

			cout << "\n\n--------------------************--------------------" << endl;
			cout << "Do you want to do another conversion?" << endl;
			cout << "Type 'y' for yes; 'n' for no: "  ;
			cin >> yes ;
			cout << endl  ;
	}
	
	_getch();


}
