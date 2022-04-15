#include <iostream>
using namespace std;

int main()
{
	float doorLength,doorWidth,window1Length,window1Width,window2Length,window2Width,bookshelfLength,bookshelfWidth,roomLength,roomWidth,roomHeight;
	float paintNeeded;
	cout << "Program that calculates the amount of paint needed to paint the walls of a room." << endl << endl;
	cout << "Enter length and width of door (in feet): ";
	cin >> doorLength >> doorWidth;
	cout << "Enter length and width of first window (in feet): ";
	cin >> window1Length >> window1Width;
	cout << "Enter length and width of second window (in feet): ";
	cin >> window2Length >> window2Width;
	cout << "Enter length and width of bookshelf (in feet): ";
	cin >> bookshelfLength >> bookshelfWidth;
	cout << "Enter length, width and height of room (in feet): ";
	cin >> roomLength >> roomWidth >> roomHeight;
	paintNeeded = (roomLength*roomWidth*roomHeight) - ((doorLength*doorWidth)+(window1Length*window1Width)+(window2Length*window2Width)+(bookshelfLength*bookshelfWidth));
	cout << "Paint needed to paint the walls of the room is " << paintNeeded << " square feet.";
	return 0;
}
