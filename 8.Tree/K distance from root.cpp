#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> myvector;
  myvector.push_back(10);
  myvector.push_back(6);
  myvector.front() += myvector.back();
  cout<<myvector.front() <<'\n';
return 0;
}