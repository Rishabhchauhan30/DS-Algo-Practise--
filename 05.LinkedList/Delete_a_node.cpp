#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
};

node* insert_begg(int data, node *headref)
{
    node *newnode = new node;
    newnode->data = data;
    if(headref == NULL)
    {
        newnode->next = NULL;
        headref = newnode;
        return headref;
    }else
    {
        newnode->next = headref;
        headref = newnode;
        return headref;
    }  
}

node* insert_end(int data, node *headref)
{
    node *newnode = new node;
    newnode->data = data;
    if(headref == NULL)
    {
        newnode->next = NULL;
        headref = newnode;
        return headref;
    }else
    {
        node *temp = headref;
        while(temp->next!=NULL)
            temp=temp->next;

        temp->next = newnode;
        return headref;
    }   
}

node* delete_begg(node *headref)
{
    if(headref==NULL || headref->next==NULL)
    return headref;
    else
    {
        node *temp = headref;
        headref = headref->next;
        return headref;
    }   
}

node* delete_end(node *headref)
{
    node *temp = headref;
    while(temp->next->next==NULL)
        temp = temp->next;

    temp->next = NULL;
    return headref;
}

void print_list(node *headref)
{
    node *temp = headref;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; 
        node *head = NULL;
        while(n--)
        {
            int data; cin>>data;
            int choice; cin>>choice;
            if(choice == 0)
                head = insert_begg(data,head);
            else if(choice == 1)
                head = insert_end(data,head);
            else if(choice == 2)
                head = delete_begg(head);
            else
                head = delete_end(head);
        }
        print_list(head);
    }
    
}