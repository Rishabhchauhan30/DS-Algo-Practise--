#include <iostream>
using namespace std;
class Print
{
    public:
    void operator() (int a){
        cout<<a<<endl;
    }
};
int main(){
    Print print;
    print(5);
return 0;
}