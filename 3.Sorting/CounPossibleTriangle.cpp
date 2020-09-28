#include <bits/stdc++.h>
using namespace std;

int PossibleTriangle(int arr[], int n)
{
    int count= 0;
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            for(int k=j+1; k<n; k++)
            if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[k]+arr[j]>arr[i])
            count++;

    return count;        
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<PossibleTriangle(arr,n)<<endl;
    } 
return 0;
}