#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  long long int ans[N+1]={1,};
  for(int i=1; i<N+1; i++) ans[i]=ans[i-1]*i;
  cout<<ans[N];
  return 0;
}