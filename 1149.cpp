#include<iostream>
using namespace std;

int main(){
  int N; cin>>N;
  int cost[N][3];
  for(int i=0; i<N; i++) cin>>cost[i][0]>>cost[i][1]>>cost[i][2];
  int ans[N][3] = {{cost[0][0], cost[0][1], cost[0][2]},};
  for(int i=1; i<N; i++){
		ans[i][0] = min(ans[i-1][1],ans[i-1][2]) + cost[i][0];
		ans[i][1] = min(ans[i-1][0],ans[i-1][2]) + cost[i][1];
		ans[i][2] = min(ans[i-1][1],ans[i-1][0]) + cost[i][2];
  }
  cout<<min(ans[N-1][0], min(ans[N-1][1], ans[N-1][2]));
  return 0;
}