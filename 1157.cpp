#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main(){
  string A; cin>>A;
  vector<pair<int, int>> ans;
  for(int i=0; i<26; i++){
    ans.push_back(pair<int, int>(0,65+i));
  }
  for(int i=0; i<A.length(); i++){
    if((int)A[i] > 96) ans[(int)A[i]-97].first += 1;
    else ans[(int)A[i]-65].first += 1;
  }
  sort(ans.begin(), ans.end());
  if(ans[24].first==ans[25].first) cout<<"?";
  else cout<<(char)ans[25].second;
  return 0;
}