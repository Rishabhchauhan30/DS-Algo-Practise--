#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left = NULL;
    int data;
    Node *right = NULL;
};
Node* push(int data, Node *headref)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(headref == NULL)
    {
        headref = newNode;
        newNode->right = NULL;
        return headref;
    }
    else
    {
        
    }
    
    
}

Node* pop()
{

}


int main(){
    push();
    push();
    push();
    push();
    push();
    push();

return 0;
}

// The idea is to use Doubly Linked List (DLL).
// We can delete middle element in O(1) time by maintaining mid pointer. 
// We can move mid pointer in both directions using previous and next pointers.