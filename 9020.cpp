#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  bool ans[10001] = {false};
  ans[0] = true; ans[1] = true;
  for(int i=2; i*i<=10001; i++){
    if(ans[i]) continue;
    else{
      for(int j=2; j*i<=10001; j++) ans[i*j] = true;
    }
  }

  int T; cin>>T;

  for(int i=0; i<T; i++){
    int N; cin>>N;
    for(int j=N/2; j>0; j--){
      if(!ans[j] && !ans[N-j]){
        cout<<j<<" "<<N-j<<"\n";
        break;
      }
    }
  }
}