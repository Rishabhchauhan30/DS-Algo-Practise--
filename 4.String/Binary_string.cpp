#include <iostream>
using namespace std;
int BinaryString(string str)
{
    int count = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i]==0)
        {
            for(int j=i+1; j<str.length(); j++)
                if(str[j]==1)
                    count++;
        }                    
    return count;
}
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        int n; cin>>n;
        string s1;
        for(int i=0; i<n; i++)
            cin>>s1[i];
        
        cout<<BinaryString(s1);
    }

return 0;
}