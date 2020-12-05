// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
    sort(arr2,arr2+n);
    vector<int> index;
    for(int i=0; i<m; i++)
    {
        int count = binary_search(arr2, 0, n-1, arr1[i]);
        index.push_back(count+1);
    }
    return index;
}
int binary_search(int arr2[], int l, int h, int x)
{
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(arr2[mid]<=x)
            l=mid+1;
        else 
            h=mid-1;
    }
    return h; //required index
}
