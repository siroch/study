#include<bits/stdc++.h>
using namespace std;

int team[21][21];
bool check[22];
int N;
int ans=19000;

void dfs(int cnt, int num);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin>>N;
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++) cin>>team[i][j];
  }
  dfs(0,1);
  cout<<ans;
  return 0;
}

void dfs(int cnt, int num){
  if(cnt==N/2){
    int start=0, link=0;
    for(int i=1; i<=N; i++){
      for(int j=1; j<=N; j++){
        if(check[i]&&check[j]) start+=team[i][j];
        if(!check[i]&&!check[j]) link+=team[i][j];
      }
    }
    ans=(ans>abs(start-link) ? abs(start-link) : ans);
    return ;
  }
  for(int i=num; i<=N; i++){
    check[i]=true;
    dfs(cnt+1,i+1);
    check[i]=false;
  }
}