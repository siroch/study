#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  vector <int> T(N+1);
  vector <int> P(N+1);
  for(int i=1; i<=N; i++) cin>>T[i]>>P[i];
  vector <int> dp(N+2);
  int max_p = 0;
  for(int i=1; i<=N+1; i++){
    dp[i] = max(dp[i], max_p);
    if(i+T[i] <= N+1) dp[i+T[i]] = max(dp[i+T[i]], dp[i]+P[i]);
    dp[i+1] = max(dp[i+1], dp[i]);
    max_p = max(max_p, dp[i]);
  }
  cout<<max_p<<"\n";
  return 0;
}