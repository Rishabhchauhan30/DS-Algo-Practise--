#include <bits/stdc++.h>
using namespace std;
bool pangram(string str)
{
    if(str.length()<26)
        return false;

    for(int i=0; i<str.length(); i++)
    {
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i]==str[j])
        } 
    }
}
int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1;
        cin>>str1;
        cout<<str1;
    }

return 0;
}