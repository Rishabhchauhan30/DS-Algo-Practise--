#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        bool flag = false;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    flag = true;
                    // cout<<i<<" ";
                    // break;
                }
            }
            if(flag==true)
            {
                cout<<i+1;
                break;
            }
        }
        if(flag==false)
        {
            cout<<-1;
        }
        cout<<endl;
    }
return 0;
}