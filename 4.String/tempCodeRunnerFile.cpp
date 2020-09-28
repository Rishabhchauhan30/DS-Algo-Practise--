#include <bits/stdc++.h>
using namespace std;
bool Anagram(string str1, string str2)
{
    int n1 = str1.length(); 
    int n2 = str2.length();

    if(n1!=n2)
        //cout<<"NO";
        return false;
    
    int count[256] = { };
    for(int i=0; i<str1.length(); i++)
        count[str1[i]]++;
    
    for(int i=0; i<str2.length(); i++)
        count[str2[i]]--;
    
    for(int i=0; i<256; i++)
        if(count!=0)
            //cout<<"NO";
            return false;

        //cout<<"YES";
    return true;
}

int main()