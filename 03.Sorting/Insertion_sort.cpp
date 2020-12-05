#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
        for(int i=1; i<n; i++) //this loop is for passes i.e for each pass what the loop has to do 
        {
            int x = arr[i];
            int j = i-1;
            while(j>-1 && arr[j]>x)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = x;
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

        InsertionSort(arr,n);

        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    } 
return 0;
}