#include <iostream>
using namespace std;

int main()
{
	char lastInitial = 'S';
	switch (lastInitial)
	{
	case 'A':
	  cout << "section 1" <<endl;
	  break;
	case 'B':
	  cout << "section 2" <<endl;
	  break;

	case 'C':
	  cout << "section 3" <<endl;
	  break;
	case 'D':
	  cout << "section 4" <<endl;
	  break;
	default:
	  cout << "section 5" <<endl;
	}
	return 0;
}
