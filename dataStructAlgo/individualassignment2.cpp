#include <iostream>
using namespace std;

struct BinaryNode{
    int data;
    BinaryNode *left;
    BinaryNode *right;
};

BinaryNode* GetNewNode(int data){
    BinaryNode* newNode = new BinaryNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BinaryNode* Insert(BinaryNode* rootPtr, int data){
    if(rootPtr == NULL ) {
        rootPtr = GetNewNode(data);
        return rootPtr;
    }
    else if(data <= rootPtr->data) {
        rootPtr->left = Insert(rootPtr->left,data);
    }
    else {
        rootPtr->right = Insert(rootPtr->right,data);
    }
}

bool Search(BinaryNode* rootPtr, int data) {
    if(rootPtr == NULL){
        return false;
    }
    else if(rootPtr->data == data){
        return true;
    }
    else if(data <= rootPtr -> data){
        return Search(rootPtr->left,data);
    }
    else return Search(rootPtr->right,data);

}

int main(){
    BinaryNode* rootPtr = NULL;
    rootPtr = Insert(rootPtr, 15);
    rootPtr = Insert(rootPtr, 20);
    rootPtr = Insert(rootPtr, 21);
    int number;
    cout << "ENter number to be serarched\n";
    cin >> number;
    if(Search(rootPtr,number) == true) cout << "Found\n";
    else cout << "Not Found\n";

}