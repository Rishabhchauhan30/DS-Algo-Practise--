#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr, arr+n);
        int count = 0;

        for(int i=0; i<n; i++)
            if(arr[i+1]-arr[i]==1 || arr[i+1]-arr[i]==0)
                count++;
        if(count==(n-1))
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;   
    }
return 0;
}