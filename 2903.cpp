#include<iostream>
using namespace std;

int main(){
  int N; cin>>N;
  int ans[N] = {3, };
  for(int i=1; i<N; i++) ans[i] = 2*ans[i-1]-1;
  cout<<ans[N-1]*ans[N-1]<<endl;
  return 0;
}