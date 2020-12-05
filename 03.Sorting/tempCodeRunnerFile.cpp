#include <bits/stdc++.h>
using namespace std;
int MinPlatform(int arr[],int dep[], int n)
{
    int min_platform = 1, result = 1; 
    for(int i=0; i<n; i++)
    {
        min_platform = 1;

        for(int j=i+1; j<n; j++)
            if(arr[i]<=arr[j] && arr[j]<=dep[i] || arr[j]<=arr[i] && dep[j]>=arr[i])
            min_platform++;
        
        result = max(min_platform,result);
    }
    return result;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n]; int dep[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n; i++)
            cin>>dep[i];

        cout<<MinPlatform(arr,dep,n);
        cout<<endl;

    }
return 0;
}