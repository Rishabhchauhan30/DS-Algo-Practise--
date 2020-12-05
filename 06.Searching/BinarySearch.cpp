#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int x)
{
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid = floor((low+high)/2);
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high = mid-1;
        else if(arr[mid]<x)
            low = mid+1;
    }
    return -1;
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int x; cin>>x;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        cout<<BinarySearch(arr, n, x);

    }
return 0;
}