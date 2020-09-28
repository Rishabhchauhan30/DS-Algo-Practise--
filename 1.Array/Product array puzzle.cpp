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
        int product[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        //int product[n];
        long long multi = 1;
        for(int i=0; i<n; i++)
        {
            multi = multi*arr[i];
        }
        // cout<<multi;
        for(int i=0; i<n; i++)
        {
            int puzzle = (multi/arr[i]);
            cout<<puzzle<<" ";
        }
        cout<<endl;
    }

return 0;
}