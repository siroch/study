#include<iostream>
using namespace std;

int main(){
  int N,M; cin>>N>>M;
  int ans[N]={0,};
  int start,end,number;
  for(int i=0; i<M; i++){
    cin>>start>>end>>number;
    for(int j=start-1; j<end; j++){
      ans[j]=number;
    }
  }
  for(int i=0; i<N; i++) cout<<ans[i]<<" ";
  return 0;
}