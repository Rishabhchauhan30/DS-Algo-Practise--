#include <bits/stdc++.h>
using namespace std;
vector<int> countElements(int arr1[], int arr2[], int n, int m)
{
    vector<int> result;
    int count=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(arr1[i]>=arr2[j])
                count++;
    
    result.push_back(count);
    return result;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[n] ,arr2[m];

        for(int i=0; i<n; i++)
            cin>>arr1[i];

        for(int i=0; i<m; i++)
            cin>>arr2[i];
        
        vector<int> res = countElements(arr1, arr2, n, m);
        for(int i=0; i<res.size(); i++)
            cout<<res[i]<<" ";
    }

return 0;
}