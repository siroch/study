#include<iostream>
#include<string>
using namespace std;

int main(){
  string A; cin>>A;
  int ans[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
  int sum=0;
  for(int i=0; i<A.length(); i++) sum += ans[(int)A[i]-65];
  cout<<sum<<endl;
  return 0;
}