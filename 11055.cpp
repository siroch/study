#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int N; cin>>N;
  int arr[N], dp[N];
  for(int i=0; i<N; i++) cin>>arr[i];
  int max=0;
  for(int i=0; i<N; i++){
    dp[i]=arr[i];
    for(int j=0; j<i; j++){
      if(arr[j]<arr[i] && dp[i]<dp[j]+arr[i]) dp[i]=dp[j]+arr[i];
    }
    if(max<dp[i]) max=dp[i];
  }
  cout<<max<<"\n";
  return 0;
}