#include<iostream>
using namespace std;

int main(){
  int N,M; cin>>N>>M;
  int ans[N];
  for(int i=1; i<N+1; i++) ans[i-1] = i;
  int start,end,temp;
  for(int i=0; i<M; i++){
    cin>>start>>end;
    for(int j=0; j<(end-start+1)/2; j++){
      temp = ans[start-1+j];
      ans[start-1+j] = ans[end-1-j];
      ans[end-1-j] = temp;
    }
  }
  for(int i=0; i<N; i++) cout<<ans[i]<<" ";
  return 0;
}