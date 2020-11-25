#include <bits/stdc++.h>
using namespace std;

bool matching(char a, char b)
{
    return ( (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}') );
}

bool isParenthesis(string str)
{
    stack<char> s;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else
        {
            if(s.empty())
                return false;           // if we encounter ")(" it means the stack is empty and also the closing bracket cannot come first.
            else if(matching(str[i], s.top()) == false)
                return false;
            else    
                s.pop();
        }
    }
    if(s.empty())
        return true;
    else
        return false;
    
}
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        if(isParenthesis(str))
            cout<<"balanced"<<endl;
        else
            cout<<"not balanced"<<endl;
    }
return 0;
}