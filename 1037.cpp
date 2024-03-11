#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int N; cin>>N;
  int ans[N];
  for(int i=0; i<N; i++) cin>>ans[i];
  sort(ans, ans+N);
  cout<<ans[0]*ans[N-1];
  return 0;
}
