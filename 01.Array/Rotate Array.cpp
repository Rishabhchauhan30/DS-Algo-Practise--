#include <bits/stdc++.h>
#include<math.h>
using namespace std;
//function to have GCD
int gcd(int a, int b)
{
    if(b==0)
    return a;
    else 
    return gcd(b, a%b);
}
//function to get left rotate array
void leftRotate(int arr[], int d, int n)
{
    d=d%n;
    int g_c_d= gcd(d,n);
    int i,j,k,temp;
    for(i=0; i<g_c_d; i++)
    {
        temp=arr[i];
        j=i;
        while(1)
        {
            k=j+d;
            if(k>=n)
            k=k-n;
            if(k==i)
            break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}
//function to print an array
void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    cout << arr[i] << " ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        leftRotate(arr, d, n);
        printArray(arr, n);
    }

return 0;
}