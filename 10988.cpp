#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  string A; cin>>A;
  string B = A;
  reverse(A.begin(), A.end());
  cout<< (A.compare(B)==0 ? 1 : 0);
  return 0;
}