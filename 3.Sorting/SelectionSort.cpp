#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int k;
    for(int i=0; i<n-1; i++)
    {
        for(int j=k=i; j<n; j++)
        {
            if(arr[j]<arr[k])
            k=j;
        }
        swap(arr[i],arr[k]);
    }
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

        SelectionSort(arr,n);

        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    } 
return 0;
}