#include<iostream>
using namespace std;
long long int fact(int n)
{
    if(n<=1)
    return 1;
    
    return fact(n-1)*n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<fact(x);
        cout<<endl;
    }
}