#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)  cin>>arr[i];

        vector <int> v(N); 
        int max = INT_MIN;

        for(int i = N-1; i >= 0; i--)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
            v[i] = max;
        }

        for(int i = 0;i < N; i++)
        {
            // cout<<v[i]<<" ";
            if(arr[i] == v[i])  cout<<v[i]<<" ";
        }
        cout<<endl;  
    }
    return 0;
}