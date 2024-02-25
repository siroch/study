#include<iostream>
#include<string>
using namespace std;

int main(){
  string S; cin>>S;
  int ans[(int)'z' - (int)'a' + 1];
  for(int i=0; i<26; i++) ans[i] = -1;
  for(int i=0; i<S.length(); i++){
    if(ans[(int)S[i]-97] == -1) ans[(int)S[i]-97] = i;
  }
  for(int i=0; i<26; i++) cout<<ans[i]<<" ";
  return 0;
}