#include<iostream>
using namespace std;

int main(){
  int N,M; cin>>N>>M;
  int ans[N];
  for(int i=0; i<N; i++) cin>>ans[i];

  int res=0;
  for(int i=0; i<N-2; i++){
    for(int j=i+1; j<N-1; j++){
      for(int k=j+1; k<N; k++){
        int tmp = ans[i]+ans[j]+ans[k];
        if(tmp<=M && tmp>=res) res=tmp;
      }
    }
  }
  cout<<res<<endl;
  return 0;
}