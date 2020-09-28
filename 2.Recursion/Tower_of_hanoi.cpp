#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<" ";
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int d,a,b,c;
    cout<<"Enter the values : ";
    cin>>d>>a>>b>>c;
    TOH(d,a,b,c);

return 0;
}