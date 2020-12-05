#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        int n,arr[200],sum=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];   
        }
        cout << sum << endl;
    }
return 0;
}