#include <bits/stdc++.h>
using namespace std;
int main()  {
    int T;  cin>>T;

    while(T--)  {
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)  cin>>A[i];
        int counter0 = 0, counter1 = 0, counter2 = 0;

        for(int i=0; i<N; i++)  {
            if(A[i] == 0)   counter0++;
            else if(A[i] == 1)  counter1++;
            else if(A[i] == 2)  counter2++;
            
        }
        for(int i=0; i < counter0; i++) cout<<0<<" ";

        for(int i=0; i < counter1; i++) cout<<1<<" ";

        for(int i=0; i < counter2; i++) cout<<2<<" ";
        
        cout<<endl;
    }
}