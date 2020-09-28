// Function to find the transition point
int transitionPoint(int arr[], int n) 
{
    int count0 = 0;
    int count1 = 0;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
            count1++;
        if(arr[i]==0)
            count0++;
    }
    if(count1==0)
        return -1;
    else if(count1==n)
        return 0;
    else
        return count0;
}