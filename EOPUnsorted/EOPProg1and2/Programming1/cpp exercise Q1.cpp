#include <iostream>
using namespace std;

int main()
{
	float score1,score2,score3,score4,score5,averageScore;
	cout << "Program that calculates average test score." << endl << endl;
	cout << "Enter 5 test scores:";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;
	averageScore = (score1+score2+score3+score4+score5)/5.0;
	cout << "The average test score is " << averageScore;
	return 0;
}
