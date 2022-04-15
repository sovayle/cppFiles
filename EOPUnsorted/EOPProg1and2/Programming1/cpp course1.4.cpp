#include <iostream>
using namespace std;

class Book
{ //set some attributes for book like a blueprint
	public:
		string title;
		string author;
		int pages;
		Book(string aTitle, string aAuthor, int aPages)
		{
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};

int main()
{
	//Book book1("Harry Potter");
	//book1.title = " Harry Potter";
	//book1.author = " JK Rowling";
	//book1.pages = 500;
	Book book1("Harry Potter","JK Rowling",500);
	
	//Book book2("LOTR");
	//book2.title = " LOTR";
	//book2.author = " Tolkien";
	//book2.pages = 700;
	Book book2("LOTR","Tolkien",700);
	
	cout << book1.title;
	return 0;
}
