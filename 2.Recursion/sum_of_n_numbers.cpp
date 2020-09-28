#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    return sum(n-1)+n;
}
int main()
{
    int x;
    cout<<"enter a number: ";
    cin>>x;
    cout<<sum(x);

return 0;
}