#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        int NGE[n];
        stack<int> s;

        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n; i++)
        {
            if(s.empty())
                s.push(i);

            else if(arr[i]<=arr[s.top()])
                s.push(i);

            else if(arr[i]>arr[s.top()])
            {
                NGE[s.top()] = arr[i];
                s.pop();
                i--;
            }
        }
        while(!s.empty())
        {
            NGE[s.top()] = -1;
            s.pop();
        }
        for(int i=0; i<n; i++)
            cout<<NGE[i]<<" ";

        cout<<endl;
    }
return 0;
}