#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N;
  cin >> N;
  vector<int> time(N+1, 0);
  vector<vector<int>> graph(N+1);
  vector<int> indegree(N+1, 0);

  for(int i=1; i<=N; i++){
    cin>>time[i];
    while(true){
      int preq; cin>>preq;
      if(preq==-1) break;
      graph[preq].push_back(i);
      indegree[i]++;
    }
  }

  queue<int> q;
  for(int i=1; i<=N; i++){
    if(indegree[i]==0) q.push(i);
  }

  vector<int> total_time(N+1, 0);
  while(!q.empty()){
      int cur = q.front();
      q.pop();
      for(int next:graph[cur]){
        total_time[next] = max(total_time[next], total_time[cur] + time[cur]);
        if(--indegree[next]==0) q.push(next);
      }
  }
  for(int i=1; i<=N; i++) cout<<total_time[i] + time[i]<<"\n";

  return 0;
}