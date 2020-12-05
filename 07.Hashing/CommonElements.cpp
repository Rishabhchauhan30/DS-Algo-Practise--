#include <bits/stdc++.h>
using namespace std;
void Common(int a1[], int a2[], int a3[], int n1, int n2, int n3)
{
    int i=0,j=0,k=0;
    int flag = 0;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a1[i]==a2[j] && a2[j]==a3[k])
        {
            flag=1;
            cout<<a1[i]<<" ";
            i++,j++,k++;
        }
        else if(a1[i]<a2[j])
            i++;
        else if(a2[j]<a3[k])
            j++;
        else
            k++;
    }
    if(flag==0)
        cout<<-1;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int a[n1], b[n2], c[n3];
        for(int i=0; i<n1; i++)
            cin>>a[i];
    
        for(int i=0; i<n2; i++)
            cin>>b[i];

        for(int i=0; i<n3; i++)
            cin>>c[i];
        Common(a,b,c,n1,n2,n3);
        cout<<endl;
    }
return 0;
}