#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct Date {int month; int day; int year;};

struct {string name; Date birth;} person;
int main()
{

person.birth.month = 12;
person.month.birth = 12;  
}
