#include<iostream>
using namespace std;

int main(){
  int M,N; cin>>M>>N;
  bool ans[10001] = {false};
  ans[0] = true; ans[1] = true;
  for(int i=2; i*i<=N; i++){
    if(ans[i]) continue;
    else{
      for(int j=2; j*i<=N; j++) ans[i*j] = true;
    }
  }
  int min=N+1, sum=0;
  for(int i=M; i<=N; i++){
    if(!ans[i]){
      if(i<min){
        min = i;
      }
      sum += i;
    }
  }
  if(sum>0) cout<<sum<<"\n"<<min<<endl;
  else cout<<-1<<endl;
  return 0;
}