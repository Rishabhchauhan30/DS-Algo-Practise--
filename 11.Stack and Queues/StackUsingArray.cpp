#include <bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1000
int arr[MAX_SIZE];
int top = -1;

void push(int x)
{
    if(top == MAX_SIZE-1)
    {
        cout<<"STACK OVERFLOW:"<<endl;
        return;
    }else
        arr[++top] = x;
}

void pop()
{
    if(top == -1)
    {
        cout<<"STACK UNDERFLOW:"<<endl;
        return;
    }else
        top--;
}

int Top()
{
    return arr[top];
}

void print()
{
    cout<<"STACK IS: ";

    for(int i=0; i<=top; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    push(2);
    print();
    push(5);
    print();
    push(8);
    print();
    pop();
    print();
    pop();
    print();
return 0;
}