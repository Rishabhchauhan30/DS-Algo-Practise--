#include <bits/stdc++.h>
using namespace std;
int squareRoot(long long int x)
{
    if(x==0 || x==1)
        return x;
    
    int l=1,r=x, result;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
            r = mid-1;
        else if(mid*mid<x)
        {
            l = mid+1;
            result = mid;
        }
    }
    return result;
}
int main()
{
    int x; cin>>x;
    int answer = squareRoot(x);
    cout<<answer<<endl;


return 0;
}