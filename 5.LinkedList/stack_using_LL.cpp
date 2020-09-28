#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next = NULL;
};

Node* push(int data, Node *headref)
{
    Node *newNode = new Node;
    newNode->data = data;
    if(headref == NULL)
    {
        newNode->next = NULL;
        headref = newNode;
        return headref;
    }else
    {
        newNode->next = headref;
        headref = newNode;
        return headref;
    }
}

Node* pop(Node *headref)
{
    Node *temp = headref;
    if(headref == NULL)
        return headref;
    
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        Node *head = NULL;
        while(n--)
        {   
            int data; cin>>data;
            int choice; cin>>choice;
            if(choice==0)
                head = push(data, head);  
            else
                head = pop(head);     
        }
    }
return 0;
}