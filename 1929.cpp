#include<iostream>
using namespace std;

int main(){
  int M,N; cin>>M>>N;
  bool ans[1000001] = {false};
  ans[0] = true; ans[1] = true;
  for(int i=2; i*i<=N; i++){
    if(ans[i]) continue;
    else{
      for(int j=2; j*i<=N; j++) ans[i*j] = true;
    }
  }
  for(int i=M; i<=N; i++){
    if(!ans[i]) cout<<i<<"\n";
  }
  return 0;
}