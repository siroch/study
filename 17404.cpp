#include<bits/stdc++.h>
using namespace std;

int ans[1001][3];
int cost[1001][3];

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N,res=99999999; cin>>N;
  for(int i=1; i<=N; i++) cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
  for(int i=0; i<=2; i++){
    for(int j=0; j<=2; j++){
      if(i==j) ans[1][j]=cost[1][j];
      else ans[1][j]=99999999;
    }
    for(int j=2; j<=N; j++){
      ans[j][0] = min(ans[j-1][1],ans[j-1][2]) + cost[j][0];
      ans[j][1] = min(ans[j-1][0],ans[j-1][2]) + cost[j][1];
      ans[j][2] = min(ans[j-1][1],ans[j-1][0]) + cost[j][2];
    }
    for(int j=0; j<=2; j++){
      if(i==j) continue;
      else res=min(res, ans[N][j]);
    }
  }
  cout<<res;
  return 0;
}