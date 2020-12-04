#include <bits/stdc++.h>
using namespace std;

//This fucntion will return the Nearest Smallest TO Left
vector<int> NSL(int arr[], int n) {

    vector <int> min_left;
    stack<pair<int,int> > s;

    int temp_index = -1; //this temp index is taken to have the values before the index 0

    for(int i=0; i<n; i++) {

        if(s.empty()) {
            min_left.push_back(temp_index);
            s.push(make_pair(arr[i],i));
        }

        if(arr[i] > s.top().first) {
            min_left.push_back(s.top().second);
            s.push(make_pair(arr[i],i));
        }

        if(arr[i] < s.top().first) {

            while(!s.empty() && arr[i] < s.top().first) 
                s.pop();

            if(s.empty()) {
                s.push(make_pair(arr[i],i));
                min_left.push_back(temp_index);
            }

            if(arr[i] > s.top().first) {
                min_left.push_back(s.top().second);
                s.push(make_pair(arr[i],i));
            }
        }
    }

    return min_left;
}

//this fucntion will return the Nearest Smaller to Right
vector<int> NSR(int arr[], int n) {

    vector <int> min_right;
    stack<pair<int, int> > s;

    int temp_index = 7;  //this temp index is taken to have the values after the index n 

    for(int i=n-1; i>=0; i--) {

        if(s.empty()) {
            min_right.push_back(temp_index);
            s.push(make_pair(arr[i],i));
        }

        if(arr[i] > s.top().first) {
            min_right.push_back(s.top().second);
            s.push(make_pair(arr[i],i));
        }

        if(arr[i] < s.top().first) {
            while(!s.empty() && arr[i] < s.top().first)
                s.pop();

            if(s.empty()) {
                min_right.push_back(temp_index);
                s.push(make_pair(arr[i],i));
            }

            if(arr[i] > s.top().first) {
                min_right.push_back(s.top().second);
                s.push(make_pair(arr[i],i));
            }
        }
    }
    reverse(min_right.begin(),min_right.end()); //reverse the vector
    return min_right;
}

int main(){

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++) 
            cin>>arr[i];
        
        vector<int> left = NSL(arr,n);
        vector<int> right = NSR(arr,n);

        int width[n];

        for(int i=0; i<n; i++)
            width[i] = right[i] - left[i] -1;  // to store the width of every column
                                               // right - left - 1 is done because right have the max index and left have min index 
                                               // and excluding these two indexes we have our result

        // for(int i=0; i<n; i++) {
        //     cout<<width[i]<<" ";
        // }

        int area[n];

        for(int i=0; i<n; i++) 
            area[i] = width[i]*arr[i];

        int max = 0;
        for(int i=0; i<n; i++) 
            if(area[i] > max) 
                max = area[i];
        cout<<max;
    }
return 0;
}

