#include<iostream>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    bool flag = false;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	   
	    for(int i=0; i<n; i++)
	     {
	        if(arr[i]==x)
            {
	            cout<<i<<" ";
	            flag = true;
                break;
            }
	     }
	     for(int i=n-1; i>0; i--)
	     {
            if(arr[i]==x)
            {
                cout<<i;
                flag = true;
                break;
            }
	     }
	     if(flag==false)
	         cout<<-1;
	     cout<<endl;
	}
	return 0;
}