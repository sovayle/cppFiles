#include <iostream>
using namespace std;

class Chef{
	public:
		void makeChicken()
		{
			cout << "The chef makes delicious chicken" << endl;
		}
		void makeSalad()
		{
			cout << "The chef makes salad" << endl;
		}
		void makeSpecialDish()
		{
			cout << "The chef makes special dish." << endl;
		}
};

class ItalianChef : public Chef{
	public:
		void makePasta()
		{
			cout << "The chef makes pasta" << endl;
		}
};

int main()
{
	
	Chef chef;
	ItalianChef italianChef;
	italianChef.makePasta();
	return 0;
}
