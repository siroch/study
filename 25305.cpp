#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int N,k; cin>>N>>k;
  int ans[N];
  for(int i=0; i<N; i++) cin>>ans[i];
  sort(ans,ans+N);
  cout<<ans[N-k];
  return 0;
}