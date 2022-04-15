#include <iostream>
using namespace std;

class Student
{ //set some attributes for book like a blueprint
	public:
		string name;
		string major;
		float gpa;
		Student(string aName, string aMajor, float aGpa)
		{
			name = aName;
			major = aMajor;
			gpa = aGpa;
		}
		
		bool hasHonours(){
			
			if (gpa >=3.5){
				return true;
			}
			return false;
		}
};

int main()
{
	Student student1("Jim", "Business", 2.4);
	Student student2("Pam", "Art", 3.6);
	
	cout << student1.name;
	return 0;
}






