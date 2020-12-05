#include <bits/stdc++.h>
using namespace std;
int PlatformNeeded(int arr[], int dep[], int n)
{
    int i = 0,j = 0,count = 0;
    while(i<n && j<n)
    {
        if(arr[i] < dep[j])
        {
            count++;
            i++;
        }
        else    
        {
            count--;
            j++;
        }
    }
    while(i<n)  
        count++;
    while(j<n)
        count--;
    
    return count;
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

        cout<<PlatformNeeded(arr,dep,n);
        cout<<endl;
    }

return 0;
}