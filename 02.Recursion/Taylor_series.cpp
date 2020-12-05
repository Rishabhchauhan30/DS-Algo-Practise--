#include <bits/stdc++.h>
using namespace std;

double Taylor_series(int x, int n)
{
    static double p=1, f=1;
    double res;

    if(n==0)
        return 1;
    else
        res=Taylor_series(x,n-1);
        p=p*x;
        f=f*n;
        return res+p/f;
}
int main()
{
    int a; int b;
    cout<<"Enter first number: "; cin>>a;
    cout<<"Enter first number: "; cin>>b;
    cout<<Taylor_series(a,b);

return 0;
}