#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    unsigned long long int i, a[n], b[n], flag=1;
	    for(i=0; i<n; i++)    cin>>a[i];
	    for(i=0; i<n; i++)    cin>>b[i];
	    sort(a,a+n);
	    sort(b,b+n);
	    
	    for(i=0; i<n; i++)
	   {
	       if(a[i]!= b[i])
	       {
	           flag=0;
	           break;
	       }
	   }
	   cout<<flag<<endl;
	}
	return 0;
}