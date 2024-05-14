#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001]={0, };

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,M; cin>>N>>M;
  int len=0;
  for(int i=1; i<=N; i++){
    string s; cin>>s;
    for(int j=1; j<=M; j++){
      dp[i][j]=s[j-1]-'0';
    }
  }
  for(int i=1; i<=N; i++){
    for(int j=1; j<=M; j++){
      if(dp[i][j]==1){
        dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
        len = max(len, dp[i][j]);
      }
    }
  }
  cout<<len*len<<"\n";
  return 0;
}