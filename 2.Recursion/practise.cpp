#include <bits/stdc++.h>
using namespace std;

void fun(int n) //Recursive function to print value from 1 to n;
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}

void fun1(int n) //Recursive funtion tp print value from n to 1;
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
    }
}

int fun2 (int n)  //funtion to print the sum of first n natural numbers;
{
    if(n>0)
    {
        return fun2(n-1)+n;
    }
    return 0;
}
//int x=0; //if it is allplied as global variable then also it will work same
int fun3(int n) //function to add static and global value;
{
    static int x=0;
    if(n>0)
    { 
        x++;  
        return fun3(n-1)+x;
    }
    return 0;
}
void fun_B(int n);

void fun_A(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun_B(n-1);
    }
}
void fun_B(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        fun_A(n/2);
    }
}

void tree_func(int n)  //function of tree recursion
{
    if(n>0)
    {
        cout<<n<<" ";
        tree_func(n-1);
        tree_func(n-1);
    }
}

int nested_fun(int n)  //function for nested function
{
    if(n>100)
    {
        return n-10;
    }else
    {
        return nested_fun(nested_fun(n+11));
    }
}

int main()
{
    int x;
    cout<<"Enter a value: ";
    cin>>x;
    fun(x);
    // fun1(x);
    // cout<<endl<<fun2(x)<<" ";
    // cout<<endl<<fun3(x)<<" "; // if call a function again then it will double the result  
    // //because at first call its value is eg(0-5) then (5-10) so its get increased
    // tree_func(x);
    // fun_A(x);
    // fun_B(x);
    // cout<<nested_fun(x);
    
return 0;   
}