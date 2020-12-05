#include <bits/stdc++.h>
using namespace std;
void Anagram(string str1, string str2)
{
    // cout<<int('g') - 97;
    int n1 = str1.length(); 
    int n2 = str2.length();

    if(n1!=n2)
    {
        cout<<"NO";
        return ;
    }
    
    int count[26] = {0};
    for(int i=0; i<str1.length(); i++)
        count[str1[i] - 97]++;
    
    // cout<<count[6];
    for(int i=0; i<str2.length(); i++)
        count[str2[i] - 97]--;
    // cout<<count[6];
    for(int i=0; i<26; i++)
        if(count[i]!=0)
        {
            cout<<"NO";
            return;
        }
            // return false;

        cout<<"YES";
    // return true;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1, str2;
        cin>>str1>>str2;
        Anagram(str1,str2);
    }
return 0;
}

