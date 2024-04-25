#include<bits/stdc++.h>
using namespace std;

#define mod 1000000

int main() {
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  string code; cin>>code;

  if(code[0]=='0'){
    cout<<0<<endl;
    return 0;
  }
  int dp[5001]={0, };
  dp[0]=1; dp[1]=1;
  for(int i=2; i<=code.size(); i++){
    char prev = code[i-2];
    char curr = code[i-1];
    int num = (prev-'0')*10 + (curr-'0');
    if(curr!='0') dp[i] = dp[i-1];
    if(num>=10 && num<=26) dp[i] = (dp[i] + dp[i-2]) % mod;
  }
  cout << dp[code.size()] << endl;
  return 0;
}