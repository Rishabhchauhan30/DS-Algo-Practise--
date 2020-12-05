#include <bits/stdc++.h>
using namespace std;

int usingLoop(int n)
{
    int t1=0, t2=1, sum;
    if(n<=1) return n;
    for(int i=2; i<=n; i++)
    {
        sum=t1+t2;
        t2=sum;
        t1=t2;
    }
    return sum;
}

int usingRecursion(int n)
{
    if(n<=1)
        return n;
    return usingRecursion(n-2) + usingRecursion(n-1);
}

int fib(int n)
{
    int arr[n+1] = { -1 }; //initialize an array having intial value as -1 at all indexes;
    
    if(n<=1)
    {
        arr[n]=n;
        return n;
    }
    else
    {
        if(arr[n-1]==-1)
            arr[n-1] = fib(n-1);
        
        if(arr[n-2]==-1)
            arr[n-2] = fib(n-2);
        
        arr[n] = arr[n-2]+arr[n-1];
    return arr[n-2] + arr[n-1];
    }
}

int main()
{
    int x;
    cout<<"Enter a value: ";
    cin>>x;

    cout<<usingLoop(x)<<endl;
    cout<<usingRecursion(x)<<endl;
    cout<<fib(x)<<endl;
return 0;
}