#include<bits/stdc++.h>
using namespace std;

int n,m;
int arr[9]={0,};

void dfs(int num, int cnt);

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin>>n>>m;
  dfs(1,0);
  return 0;
}

void dfs(int num, int cnt){
  if(cnt==m){
    for(int i=0; i<m; i++) cout<<arr[i]<<" ";
    cout<<"\n";
    return;
  }
  for(int i=num; i<=n; i++){
    arr[cnt]=i;
    dfs(i,cnt+1);
  }
}