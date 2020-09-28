#include <bits/stdc++.h>
using namespace std;
int floorValue(int arr[], int n, int x)
{
    for(int i=n-1; i>0; i--)
    {
        if(arr[i]==x)
            return i;
        else if(arr[i]<x)
            return i;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int value = floorValue(arr,n,k);
        cout<<value<<endl;
    }

return 0;
}