#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n)
{
    int max = 0;
    for(int i=0; i<n; i++)
        if(max<arr[i])
            max=arr[i]; 
    return max;
}

void countSort(int arr[], int n)
{
    int max = findMax(arr,n);
    int count[max+1];
    for(int i=0; i<max+1; i++)
        count[i]=0;
    
    for(int i=0; i<n; i++)
        count[arr[i]]++;
    
    int i=0, j=0;
    while(j<max+1)
    {
        if(count[j]>0)
        {
            arr[i++]=j;
            count[j]--;
        }else
            j++;
    }

}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    countSort(arr,n);

    for(int i=0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //cout<<findMax(arr,n);
return 0;
}