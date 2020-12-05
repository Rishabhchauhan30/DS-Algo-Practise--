#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        char arr[n];
        for(int i=0; i<n; i++) 
            cin>>arr[i];
        cin.ignore(256, '\n'); 
        
        stack <int> s;
        s.push(-1);
        int ans = 0;

        for(int i=0; i<n; i++) {

            if(arr[i] == '(') 
                s.push(i);
            
            else //(arr[i] == ')') 
            {
                if(!s.empty()) 
                    s.pop();
                
                if(!s.empty())
                    ans = max(ans, i-s.top());
                
                else // (s.empty())
                    s.push(i);
            }
        }
        cout<<ans<<endl;
    }
return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------------------
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        
        stack <int> st;
        st.push(-1); 
        int ans = 0;
        
        for(int i=0; i<s.length(); i++) {
            
            if(s[i]=='(') 
                st.push(i);
                
            else //if s[i] == ')' if now element is closing bracket
            {
                if(!st.empty()) 
                    st.pop();
                
                if(!st.empty())
                    ans = max( ans , i - st.top());
                    
                else // if stack is empty
                    st.push(i);
            }
        }
        return ans;
    }
};
---------------------------------------------------------------------------------------------------------------------------------------------------
    # T.C = O(n)
 ----------------------------------------------------------------------------------------------------------------------------------------------------   
