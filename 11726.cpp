#include<iostream>
using namespace std;

int main(){
  int n; cin>>n;
  int ans[n+1] = {0,};
  ans[1]=1; ans[2]=2;
  for(int i=3; i<n+1; i++) ans[i] = (ans[i-1] + ans[i-2])%10007;
  cout<<ans[n]<<endl;
  return 0;
}