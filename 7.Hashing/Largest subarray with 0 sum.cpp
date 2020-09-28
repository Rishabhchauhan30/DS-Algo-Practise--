int maxLen(int A[], int n)
{
        unordered_map<int, int> mymap;

    int sum =0;
    int lenth = 0;

    for(int i=0; i<n; i++)
    {
        sum = sum + A[i];

        if(A[i]==0 && sum == 0)
            lenth = 1 ;
        if(sum == 0)
            lenth = i+1;
        //look for this sum in hashtable
        if(mymap.find(sum) != mymap.end())
            lenth = max(lenth, i-mymap[sum]);
        else
            mymap[sum] = i;
    }
    return lenth;
}
