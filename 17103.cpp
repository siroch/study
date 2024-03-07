#include<iostream>
using namespace std;

int main(){
  bool ans[1000001] = {false};
  ans[0] = true; ans[1] = true;
  for(int i=2; i*i<=1000000; i++){
    if(ans[i]) continue;
    else{
      for(int j=2; j*i<=1000000; j++) ans[i*j] = true;
    }
  }
  int T, n, count; cin>>T;
  while(T--){
    cin>>n;
    count=0;
    for(int i=2; i<=n/2; i++){
      if(!ans[i] && !ans[n-i]) count++;
    }
    cout<<count<<"\n";
  }
  return 0;
}