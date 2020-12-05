#include <bits/stdc++.h>
using namespace std;
int main(){
    int T,N,max,min,arr[100];
    cin >> T;
    while(T--){
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        max = arr[0];
        for(int i=1; i<N; i++){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        min = arr[0];
        for(int i=1; i<N; i++){
            if(min > arr[i]){
                min = arr[i];
            }
        }
        cout << max << " " << min << endl;
    
    }
return 0;
}