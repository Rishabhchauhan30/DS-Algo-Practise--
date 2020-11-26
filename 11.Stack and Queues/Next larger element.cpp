vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    vector <long long> v;
    stack <long long> s;
    
    for(int i=n-1; i>=0; i--)
    {
        if(s.empty())
        {
            v.push_back(-1);
            s.push(arr[i]);
        }
        
        if(arr[i] > s.top())
        {
            while(!s.empty() && arr[i] > s.top())
                s.pop();
                if(s.empty()) 
                {
                    v.push_back(-1);
                    s.push(arr[i]);
                }
                if(arr[i] < s.top())
                {
                    v.push_back(s.top());
                    s.push(arr[i]);
                }
        }
        
        if(arr[i] < s.top())
        {
            v.push_back(s.top());
            s.push(arr[i]);
        }
        
    }
        reverse(v.begin(), v.end());
        return v;
}