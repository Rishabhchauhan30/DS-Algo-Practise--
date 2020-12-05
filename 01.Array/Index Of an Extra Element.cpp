/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
    int sum1 =0;
    int sum2 =0;
    
    for(int i=0; i<n; i++)
        sum1+= a[i];
    
    for(int i=0; i<n-1; i++)
        sum2+= b[i];
    
    int sub = sum1 - sum2;
    
    for(int i=0; i<n; i++)
        if(sub==a[i])
            return i;
}