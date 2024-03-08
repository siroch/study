#include<iostream>
#include<string>
using namespace std;

int main(){
  int n; cin>>n;
  while(n--){
    string S; cin>>S;
    if(S[S.length()-1]=='(' || S[0]==')'){
      cout<<"NO\n";
      continue;
    }
    int count=0;
    for(auto T:S){
      if(T=='(') count++;
      else if(T==')') count--;
      if(count<0) break;
    }
    if(count==0) cout<<"YES\n";
    else cout<<"NO\n";
  }
  return 0;
}