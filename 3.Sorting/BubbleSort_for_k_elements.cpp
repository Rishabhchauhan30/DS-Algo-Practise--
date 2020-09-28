#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int k; cin>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        BubbleSort(arr,n);

        for(int i=n-1; i>k; i--)
            cout<<arr[i]<<" ";
    } 
return 0;
}