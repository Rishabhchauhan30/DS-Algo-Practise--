#include <iostream>
using namespace std;
int main(){
    int T,N,arr[1000],largest;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        for(int i=0; i<N; i++){
            cin >> arr[i];
        }
        largest = arr[0];
        for(int i=1; i<N; i++){
            if(largest < arr[i]){
                largest = arr[i];
            }

        }
        cout << largest << endl;
    }

return 0;
}