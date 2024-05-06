#include<bits/stdc++.h>
using namespace std;

int dp[1001][31][2];
int mov[1001];

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T, W; cin>>T>>W;
  for(int i=0; i<T; i++) cin>>mov[i];

  for(int i=0; i<=W; i++){
    for(int j=1; j<=T; j++){
      if(i==0) dp[j][i][0] = dp[j-1][i][0] + (mov[j-1]==1);
      else{
        dp[j][i][0] = max(dp[j-1][i][0]+(mov[j-1]==1), dp[j-1][i-1][1]+(mov[j-1]==1));
        dp[j][i][1] = max(dp[j-1][i][1]+(mov[j-1]==2), dp[j-1][i-1][0]+(mov[j-1]==2));
      } 
    }
  }

  int res=0;
  for(int i=0; i<2; i++){
    for(int j=0; j<=W; j++) res = max(res, dp[T][j][i]);
  }
  cout<<res<<"\n";
  return 0;
}