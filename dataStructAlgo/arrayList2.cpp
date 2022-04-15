#include <iostream>
#include <list>
using namespace std;
int main()
{
//creating 2 lists of integer type
list<int> mlist1 = {100, 30, 12, 45, 76, 43, 4};
list<int> mlist2 = {56, 54, 43, 23, 45};
//Sorting the list ‘mlist1’ in increasing order
mlist1.sort();
cout<< "List 1 after sorting is: " <<endl;
for (int i : mlist1) {
cout<<i<< '\n';
}
//Sorting the list ‘mlist’ in increasing order
mlist2.sort();
cout<< "List 2 after sorting is: " <<endl;
for (int i : mlist2) {
cout<<i<< '\n';
}
// merging the mlist1 in mlist2
mlist2.merge(mlist1);
cout<< "List 2 after merging is: " <<endl;
for (int i : mlist2) {
cout<<i<< '\n';
}
cout<< "Size of list 2 after merging is: ";
cout<< mlist2.size() << '\n';
}