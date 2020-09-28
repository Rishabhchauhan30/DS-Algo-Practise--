#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr2[], int l, int h, int x)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(arr2[mid]<=x)
            l=mid+1;
        else 
            h=mid-1;
    }
    return h; //required index
}
vector<int> countElements(int arr1[], int arr2[], int n, int m)
{
    sort(arr2,arr2+m);
    vector<int> index;
    for(int i=0; i<n; i++)
    {
        int count = binarySearch(arr2, 0, m-1, arr1[i]);
        index.push_back(count+1);
    }
    return index;

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