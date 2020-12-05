#include <bits/stdc++.h>
using namespace std;
int Search(int arr[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n;i++)
            cin>>arr[i];
        int k; cin>>k;
        int result = Search(arr,n,k);
        cout<<result<<endl;
    }

return 0;
}