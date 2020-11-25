#include <bits/stdc++.h>
using namespace std;             
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int l,r;
        sort(arr,arr+n);
        bool flag = false;
        for(int i=0; i<n-2; i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(arr[i]+arr[l]+arr[r] == x)
                {
                    cout<<1;
                    flag = true;
                    break;
                }else if(arr[i]+arr[l]+arr[r] < x)
                    l++;
                else
                    r--; 
            }
            if(flag)    break;
        }
        if(flag==false)
        cout<<0;
        cout<<endl;
    }
    //cout<<endl;
    return 0;
}