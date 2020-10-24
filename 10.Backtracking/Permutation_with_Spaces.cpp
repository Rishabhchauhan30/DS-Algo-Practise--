#include<bits/stdc++.h>

using namespace std;
void permutation(string op, string ip)
{
    if(ip.length()==0)
    {    
        cout<<op<<')';
        return;
    }
    
    string op1 = op;
    string op2 = op;
    
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    permutation(op1,ip);
    permutation(op2,ip);
    return;
}

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
        string ip;
        cin>>ip;
        string op;
        op.push_back('(');
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        permutation(op,ip);
        cout<<endl;
     }
	return 0;
}