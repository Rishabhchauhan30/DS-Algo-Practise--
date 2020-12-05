#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
            cout<<arr[i]<<' ';

        bool flag = false;

        for(int i=0; i<n; i++)
        {
            if(arr[i+1] - arr[i]==2)
            {
                cout<<arr[i]+1;
                flag = true;
            }
        }   

        if(flag==false)
            cout<<arr[n]+1;
        cout<<endl;
    }

return 0;
}