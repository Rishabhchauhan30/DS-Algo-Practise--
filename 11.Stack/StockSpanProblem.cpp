#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];

        vector<int> v;
        stack<pair<int,int>> s;

        for(int i=0; i<n; i++) {

            if(s.empty()) {
                s.push(make_pair(arr[i],i));
                v.push_back(1);
            }

            if(s.top().first > arr[i]) {
                s.push(make_pair(arr[i],i));
                v.push_back(1);
            }

            if(s.top().first < arr[i]) {

                while(!s.empty() && s.top().first < arr[i]) 
                    s.pop();

                if(s.empty()) {
                    v.push_back(i+1);
                    s.push(make_pair(arr[i],i));
                }

                if(s.top().first > arr[i]) {
                    v.push_back((i) - (s.top().second));
                    s.push(make_pair(arr[i],i));
                }
            }
        }
        for(auto i=v.begin(); i!=v.end(); i++)
            cout<< *i << " ";
        
        cout<<endl;
    }
return 0;
}