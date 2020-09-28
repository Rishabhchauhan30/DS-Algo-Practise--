#include<iostream>
using namespace std;
int main()
 {
     int T,size,sum=0,arr[100];
     cin >> T;
     while(T--){
         cin >> size;
         sum = 0;
         for(int i=0; i<size; i++){
             cin >> arr[i];
             sum+=arr[i];
        }
        cout << sum << endl;
     }
	return 0;
 }