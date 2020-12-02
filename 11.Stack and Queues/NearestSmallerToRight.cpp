#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        stack<int> s;
        vector<int> v;

        for(int i=n-1; i>=0; i--) {

            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }

            if(arr[i] > s.top()) {
                v.push_back(s.top());
                s.push(arr[i]);
            }

            if(arr[i] < s.top()) {
                
                while(!s.empty() && arr[i] < s.top())
                    s.pop();

                if(s.empty()) {
                    v.push_back(-1);
                    s.push(arr[i]);
                }

                if(arr[i] > s.top()) {
                    v.push_back(s.top());
                    s.push(arr[i]);
                }
            }
        }

        reverse(v.begin(), v.end());

        for(auto i=v.begin(); i!=v.end(); i++){
            cout<< *i << " ";
        }
    }

return 0;
}