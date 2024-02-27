#include<iostream>
using namespace std;

int main(){
  int N,K; cin>>N>>K;
  for(int i=1; i<N+1; i++){
    if(N%i==0) K--;
    if(K==0){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<0<<endl;
  return 0;
}