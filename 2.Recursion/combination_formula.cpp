#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int nCr(int n, int r)
{
    int t1,t2,t3;
    if(n==0)
        return 1;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    return t1/(t2*t3);
}

int NCR(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    return NCR(n-1,r-1) + NCR(n-1,r);
}
int main()
{
    int x;
    int y;
    cout<<"Enter n value: ";
    cin>>x;
    cout<<"Enter r value: ";
    cin>>y;
    cout<<NCR(x,y);

return 0;
}