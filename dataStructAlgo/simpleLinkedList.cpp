#include <iostream>
using namespace std;

class Node {
public:
	double	data;		// data
	Node*	next;		// pointer to next
};

class List {
public:
	List(void) {		// constructor
		head = NULL; 
	}
	~List(void){		// destructor

	}		

	bool IsEmpty() { return head == NULL; }
	Node* InsertNode(int index, double x);	
	int FindNode(double x);	
	int DeleteNode(double x);
	void DisplayList(void);
private:
	Node* head;
};




void List::DisplayList()
{
   int num		= 0;
   Node* currNode	= head;
   while (currNode != NULL){
	cout << currNode->data << endl;
	currNode	= currNode->next;
	num++;
   }
   cout << "Number of nodes in the list: "<< num << endl;
}

int List::DeleteNode(double x) {
	Node* prevNode	=	NULL;
	Node* currNode	=	head;
	int currIndex	=	1;
	while (currNode && currNode->data != x) {
		prevNode	=	currNode;
		currNode	=	currNode->next;
		currIndex++;
	}

	if (currNode) {
		if (prevNode) {
			prevNode->next	= currNode->next;
			delete currNode;
		}
		else {
			head = currNode->next;
			delete currNode;
		}
		return currIndex;
	}
	return 0;
}

Node* List::InsertNode(int index, double x) {
	if (index < 0) return NULL;	
	
	int currIndex	=	1;
	Node* currNode	=	head;
	while (currNode && index > currIndex) {
		currNode	=	currNode->next;
		currIndex++;
	}
	if (index > 0 && currNode == NULL) return NULL;
	
	Node* newNode	=	new	Node;
	newNode->data	=	x;	
	if (index == 0) {
		newNode->next	=	head;
		head		=	newNode;
	}
	else {
		newNode->next	=	currNode->next;
		currNode->next	=	newNode;
	}
	return newNode;
}

int List::FindNode(double x) {
	Node* currNode	=	head;
	int currIndex	=	1;
	while (currNode && currNode->data != x) {
		currNode	=	currNode->next;
		currIndex++;
	}
	if (currNode) return currIndex;
	return 0;
}

int main(void){

    List list;
	list.InsertNode(0, 7.0); // successful
	list.InsertNode(1, 5.0); // successful
	list.InsertNode(-1, 5.0);// unsuccessful
	list.InsertNode(0, 6.0); // successful
	list.InsertNode(8, 4.0); // unsuccessful
	// print all the elements
	list.DisplayList();			
	if(list.FindNode(5.0) > 0) cout << "5.0 found" << endl;	
	else			   cout << "5.0 not found" <<endl;
	if(list.FindNode(4.5) > 0) cout << "4.5 found" << endl;
	else			   cout << "4.5 not found" <<endl;
	list.DeleteNode(7.0);
	list.DisplayList();
	return 0;

}