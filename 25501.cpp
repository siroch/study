#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int rec(const char *s, int l, int r);
int isP(const char *s);

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  char s[1001];
  while(N--){
    cnt=0;
    cin>>s;
    int ans = isP(s);
    cout<<ans<<" "<<cnt<<"\n";
  }
  return 0;
}

int rec(const char *s, int l, int r){
  cnt++;
  if(l>=r) return 1;
  else if(s[l]!=s[r]) return 0;
  else return rec(s, l+1, r-1);
}

int isP(const char *s){
  return rec(s, 0, strlen(s)-1);
}