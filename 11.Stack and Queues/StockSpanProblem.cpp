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

Time Complexity: O(n). It seems more than O(n) at first look. 
    If we take a closer look, we can observe that every element of the array is added and removed from the stack at most once. 
    So there are total 2n operations at most. 
    Assuming that a stack operation takes O(1) time, we can say that the time complexity is O(n).

Auxiliary Space: O(n) in worst case when all elements are sorted in decreasing order.
    
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
Another approach can be without using stack Else everything is same.
 
