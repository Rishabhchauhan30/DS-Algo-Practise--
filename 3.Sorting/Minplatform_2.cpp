#include <bits/stdc++.h>
using namespace std;
int PlatformNeeded(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);

    int count = 1;
    int max_need = 1;
    int i=1;
    int j=0;

    while(i<n && j<n)
    {
        if(arr[i]>=dep[j])
        {
            count--;
            j++;
        }
        else if(arr[i]<=dep[j])
        {
            count++;
            i++;
        }
        if(count > max_need)
            max_need = count;
    }
    return max_need;
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