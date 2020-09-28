#include <bits/stdc++.h>
using namespace std;
  

void printNum(int arr[], int n,int &first,int &second)
{
    // if(n<2)
    //     return;

    for(int i=0; i<n; i++)
    {
        if(arr[i]<first)
        {
            second = first;
            first = arr[i];
        }else if(arr[i]<second && arr[i]!=first)
            second = arr[i];  
    }
    // if(second==INT32_MAX)
    //     return -1;
    // else
    // return 1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        if(n>=2)
        {
            int first = INT32_MAX;
            int second = INT32_MAX;

            printNum(arr,n,first,second);
            if(first==INT32_MAX || second == INT32_MAX)
                cout<<-1<<endl;
            // else if(second==INT32_MAX)
            //    cout<<first<<" "<<-1<<endl; 
            else cout<<first<<" "<<second<<endl;
        }
        else
            cout<<-1<<endl;
    }
 
return 0;
}